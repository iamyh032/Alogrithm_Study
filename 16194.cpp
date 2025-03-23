#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* P = new int[N+1];
    P[0] = 0;
    for(int i=1; i<=N; i++){
        cin >> P[i];
    }
    int* dp = new int[N+1];
    for(int i=1; i<=N; i++){
        dp[i] = P[i];
        for(int j=1; j<=i; j++){
            dp[i] = min(dp[i], P[i-j]+dp[j]);
        }
    }
    cout << dp[N];
}

