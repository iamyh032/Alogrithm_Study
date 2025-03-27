#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int** dp = new int*[N+1];

    dp[0] = new int[3];
    dp[0][0] = 0; dp[0][1] = 0; dp[0][2] = 0;

    for(int i=1; i<= N; i++){
        dp[i] = new int[3];
        int x;
        cin >> x;

        dp[i][1] = dp[i-1][0] + x;

        if(dp[i-1][1]==0){
            dp[i][2] = 0;
        } else{
            dp[i][2] = dp[i-1][1] + x;
        }

        sort(dp[i-1], dp[i-1]+3);
        dp[i][0] = dp[i-1][2]; 
    }

    sort(dp[N], dp[N]+3);
    cout << dp[N][2];

    for(int i=0; i<=N; i++){
        delete[] dp[i];
    }
    delete[] dp;
}
