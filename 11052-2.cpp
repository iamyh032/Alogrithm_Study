#include <iostream>
using namespace std;

int dp[1001];
bool SIG[1001];
int price[1001];

int func(int a){
    if(SIG[a]) {return dp[a];}
    int max=price[a];
    for(int i=1; i<=a/2; i++){
        if(func(i)+func(a-i) > max){
            max = dp[i]+dp[a-i];
        }
    }
    dp[a] = max;
    SIG[a] = 1;
    return max;
}

int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> price[i];
    }
    dp[1] = price[1];
    SIG[0] = SIG[1] = 1;

    cout << func(N) << "\n";
}
