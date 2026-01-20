#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int* p = new int[N+1];
    for(int i=1; i<=N; i++){
        cin >> p[i];
    }
    int *dp = new int[N+1];
    dp[0] = 0;
    for(int i=1; i<=N; i++){
        dp[i] = p[i];
        for(int j=1; j<=i/2; j++){
            dp[i] = min(dp[i], dp[j]+dp[i-j]);
        }
    }
    cout << dp[N] << "\n";
}
