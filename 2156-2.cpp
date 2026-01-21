#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int (*dp)[3] = new int[n+1][3];

    int amount;
    cin >> amount;
    dp[1][0] = dp[1][2] = 0;
    dp[1][1] = amount;
    for(int i=2; i<=n; i++){
        cin >> amount;
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        dp[i][1] = dp[i-1][0] + amount;
        dp[i][2] = dp[i-1][1] + amount;
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]});
    delete[] dp;
}
