#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int** dp = new int*[n+1];
    for(int i=0; i<=n; i++){
        dp[i] = new int[3];
    }
    dp[0][0] = dp[0][1] = dp[0][2] = 0;

    for(int i=1; i<=n; i++){
        int red, green, blue;
        cin >> red >> green >> blue;
        dp[i][0] = min(dp[i-1][1]+red, dp[i-1][2]+red);
        dp[i][1] = min(dp[i-1][0]+green, dp[i-1][2]+green);
        dp[i][2] = min(dp[i-1][0]+blue, dp[i-1][1]+blue);
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << "\n";
    for(int i=0; i<=n; i++){
        delete[] dp[i];
    }
    delete[] dp;
}
