#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int* dp = new int[N];
    
    cin >> dp[0];
    int count = dp[0];
    for(int i=1; i<N; i++){
        cin >> dp[i];
        if(dp[i-1]>0){
            dp[i] += dp[i-1];
        }
        if(dp[i]>count){
            count = dp[i];
        }
    }
    cout << count;
    delete[] dp;
}
