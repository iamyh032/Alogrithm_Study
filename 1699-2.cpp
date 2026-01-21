#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001];
bool visited[100001];
int func(int x){
    if(visited[x]){
        return dp[x];
    } else {
        dp[x] = func(x-1)+1;
        for(int i=2; i*i<=x; i++){
            dp[x] = min(dp[x], dp[x-(i*i)]+1);
        }
        visited[x] = true;
        return dp[x];
    }
}
int main(){
    int N;
    cin >> N;
    dp[1] = 1; 
    visited[0] = visited[1] = true;

    cout << func(N) << "\n";
}


