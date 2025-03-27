#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* num = new int[n+1];
    int* dp = new int[n+1];

    cin >> num[1];
    dp[1] = num[1];
    if(n==1) {
        cout << num[1];
        return 0;
    }

    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin >> num[j];
        }
        dp[i] = dp[i-1] + num[i];
        for(int j=i-1; j>=2; j--){
            dp[j] = max(dp[j-1], dp[j]) + num[j];
        }
        dp[1] = dp[1] + num[1];
    }

    
    sort(dp+1, dp+n+1);
    cout << dp[n];

    delete[] num;
    delete[] dp;
}
