#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N];
    int* dp = new int[N];

    for(int i=0; i<N; i++){
        cin >> A[i];
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(A[j]>A[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    sort(dp, dp+N);
    cout << dp[N-1];

    delete[] A;
    delete[] dp;
}
