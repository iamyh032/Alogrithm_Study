#include <iostream>
using namespace std;

int dp[1001] = {};
int M(int x, int* P){
    if(x==0 || x==1) {return P[x];}
    if(dp[x]>0) {
        return dp[x];
    }
    dp[x] = P[x];
    for(int i=1; i<x; i++){
        int temp = P[i] + M(x-i, P);
        if(temp>dp[x]){dp[x] = temp;}
    }
    return dp[x];
}

int main() {
    int N;
    cin >> N;
    int* P = new int[N+1];
    P[0] = 0;
    for(int i=1; i<=N; i++){
        cin >> P[i];
    }
    cout << M(N, P);
}
