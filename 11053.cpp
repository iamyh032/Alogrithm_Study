#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    int* dp = new int[N];

    int count=0;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        dp[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
        if(dp[i]>count) {count = dp[i];}
    }

    cout << count;

    delete[] arr;
    delete[] dp;
}
