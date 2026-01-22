#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    int* dp = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        dp[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[i]<arr[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    sort(dp, dp+n);
    cout << dp[n-1];

    delete[] arr;
    delete[] dp;
}
