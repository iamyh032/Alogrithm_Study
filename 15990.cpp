#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    int dp[100001] = {};
    long long int a[100001][3];

    a[1][0]=1; a[1][1]=0; a[1][2]=0;
    a[2][0]=0; a[2][1]=1; a[2][2]=0;
    a[3][0]=1; a[3][1]=1; a[3][2]=1;
    dp[1]=1; dp[2]=1; dp[3]=3;

    int mod = 1000000009;
    for(int i=4; i<100001; i++){
        
        a[i][0] = (dp[i-1]-a[i-1][0]+mod)%mod;
        a[i][1] = (dp[i-2]-a[i-2][1]+mod)%mod;
        a[i][2] = (dp[i-3]-a[i-3][2]+mod)%mod;
        long long temp = a[i][0] + a[i][1] + a[i][2];
        dp[i]=temp%mod;
    }
    
    while(T--){
        int x;
        cin >> x;
        cout << dp[x] << "\n";
    }
}

