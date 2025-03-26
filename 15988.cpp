#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    int* dp = new int[1000001];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int MOD = 1000000009;
    for(int i=4; i<1000001; i++){
        dp[i] = (((dp[i-1]%MOD)+(dp[i-2]%MOD))%MOD+(dp[i-3]%MOD))%MOD;
    }
    while(T--){
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
}
