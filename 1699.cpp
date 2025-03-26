#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int* dp = new int[N+1];

    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<N+1; i++){
        dp[i] = i;
        for(int j=1; j*j<=i; j++){
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    cout << dp[N];
}
