#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *dp = new int[n+1];
    dp[0]=1;
    dp[1]=dp[3]=0;
    dp[2]=3;
    dp[4]=11;

    int sum = dp[0]+dp[2]+dp[4];
    for(int i=5; i<=n; i=i+1){
        if(i%2==1){
            dp[i]=0;
        } else {
            dp[i]=dp[i-2]+2*sum;
            sum += dp[i];
        }
    }

    cout << dp[n];
    delete[] dp;
}


