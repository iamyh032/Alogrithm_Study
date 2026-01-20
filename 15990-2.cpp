#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001][4];
int arr[100001];
int main(){
    int T;
    cin >> T;
    dp[1][0] = dp[1][1] = 1;
    dp[2][0] = dp[2][2] = 1;
    dp[3][1] = dp[3][2] = dp[3][3] = 1;
    dp[3][0] = 3;
    int MAX=0;
    for(int i=0; i<T; i++){
        cin >> arr[i];
        MAX = max(MAX, arr[i]);
    }
    for(int i=4; i<=MAX; i++){
        dp[i][1] = (dp[i-1][2] + dp[i-1][3]) %1000000009;
        dp[i][2] = (dp[i-2][1] + dp[i-2][3]) %1000000009 ;
        dp[i][3] = (dp[i-3][1] + dp[i-3][2]) %1000000009 ;
        dp[i][0] = ((dp[i][1] + dp[i][2])%1000000009 + dp[i][3]) %1000000009;
    }
    for(int i=0; i<T; i++){
        cout << dp[arr[i]][0] << "\n";
    }
}
