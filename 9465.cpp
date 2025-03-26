#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int** a = new int*[N+1];   // 입력받는 점수 저장
        int** dp = new int*[N+1]; // dp[i][0]: i번째 윗칸 썻을때 i까지의 최댓값 / dp[i][1]: 아랫칸 / dp[i][2]: 비어있을떄

        for(int i=1; i<=N; i++){
            a[i] = new int[2];
            dp[i] = new int[3];
            cin >> a[i][0];
        }
        for(int i=1; i<=N; i++){
            cin >> a[i][1];
        }
        dp[1][0] = a[1][0]; dp[1][1] = a[1][1]; dp[1][2] = 0;
        for(int i=2; i<=N; i++){
            dp[i][0] = max(dp[i-1][1]+a[i][0], dp[i-1][2]+a[i][0]);
            dp[i][1] = max(dp[i-1][0]+a[i][1], dp[i-1][2]+a[i][1]);
            sort(dp[i-1], dp[i-1]+3);
            dp[i][2] = dp[i-1][2];
        }
        sort(dp[N], dp[N]+3);
        cout << dp[N][2] << "\n";

        for(int i=1; i<=N; i++){
            delete[] a[i];
            delete[] dp[i];
        }
        delete[] a; delete[] dp;
    }
}
