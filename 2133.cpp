#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N%2 == 1) {
        cout << 0; 
        return 0;
    } //홀수

    int* dp = new int[N/2];
    dp[0]=3;
    dp[1]=11;

    for(int i=2; i<N/2; i++){
        dp[i] = 4*dp[i-1] - dp[i-2];
    }

    cout << dp[N/2-1];

    delete[] dp;
    return 0;
}
