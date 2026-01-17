#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N, B;
    cin >> N >> B;
    if(N==0){
        cout << N;
        return 0;
    }
    stack<int> S;
    while(N!=0){
        S.push(N%B);
        N = N/B;
    }

    while(!S.empty()){
        if(S.top()>9){
            cout << char(S.top() - 10 +'A');
            S.pop();
        } else {
            cout << S.top() ;
            S.pop();
        }
    }
}
