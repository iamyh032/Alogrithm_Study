#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* dp = new int[n+1];
    int* val = new int[n+1];
    cin >> val[1];
    dp[1] = val[1];

    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin >> val[j];
        }
        
        int before=dp[1], current;
        dp[1] = dp[1] + val[1];

        for(int j=2; j<i; j++){
            current = dp[j];
            dp[j] = max(before, current);
            dp[j] += val[j];
            before = current;
        }
        dp[i] = before + val[i];
    }
    
    int maxVal =0;
    for(int i=1; i<=n; i++){
        maxVal = max(maxVal, dp[i]);
    }
    cout << maxVal << endl;

    delete[] dp;
    delete[] val;
}
