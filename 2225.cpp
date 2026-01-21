#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    int** dp = new int*[n+1];
    for(int i=0; i<=n; i++){
        dp[i] = new int[k+1];
    }

    for(int i=0; i<=n; i++){
        dp[i][0] = 0;
        dp[i][1] = 1;
    }
    for(int j=1; j<=k; j++){
        dp[0][j] = 1;
    }

    for(int j=2; j<=k; j++){
        for(int i=1; i<=n; i++){
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000000;
        }
    }

    cout << dp[n][k] << "\n";

    for(int i=0; i<=n; i++){
        delete[] dp[i];
    }
    delete[] dp;
}

