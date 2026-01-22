#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *dp = new int[n];
    int *a = new int[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        dp[i] = a[i];
        for(int j=0; j<i; j++){
            if(a[i]>a[j]){
                dp[i] = max(dp[i], dp[j]+a[i]);
            }
        }
    }

    sort(dp, dp+n);
    cout << dp[n-1];

    delete[] dp;
    delete[] a;
    return 0;
}

