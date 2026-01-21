#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int (*arr)[2] = new int[n+1][2];
        for(int i=1; i<=n; i++){
            cin >> arr[i][0];
        }
        for(int i=1; i<=n; i++){
            cin >> arr[i][1];
        }

        int (*dp)[3] = new int[n+1][3];
        dp[1][0]=arr[1][0]; dp[1][1]=arr[1][1]; dp[1][2]=0;  

        for(int i=2; i<=n; i++){
            dp[i][0] = max(dp[i-1][1]+arr[i][0], dp[i-1][2]+arr[i][0]);
            dp[i][1] = max(dp[i-1][0]+arr[i][1], dp[i-1][2]+arr[i][1]);
            dp[i][2] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        }

        cout << max({dp[n][0], dp[n][1], dp[n][2]}) << "\n";

        delete[] arr;
    }
}
