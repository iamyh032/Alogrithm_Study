#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int** dp = new int*[N+1];
    dp[1] = new int[10];
    for(int i=0; i<10; i++){
        dp[1][i] = 1;
    }

    int MOD = 10007;
    for(int i=2; i<=N; i++){
        dp[i] = new int[10];
        dp[i][0] = dp[i-1][0];
        for(int j=1; j<10; j++){
            dp[i][j] = (dp[i][j-1] + dp[i-1][j])%MOD;
        }
    }

    int count = 0;
    for(int i=0; i<10; i++){
        count += dp[N][i];
        count %= MOD;
    }
    cout << count;

    for(int i=1; i<=N; i++){
        delete[] dp[i];
    }
    delete[] dp;
}
