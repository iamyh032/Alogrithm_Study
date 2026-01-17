#include <iostream>
#include <stack>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    stack<int> S;
    int m;
    cin >> m;
    while(m--){
        int n;
        cin >> n;
        S.push(n);
    }
    int i=1, decimal=0;
    while(!S.empty()){
        decimal += i*S.top();
        S.pop();
        i *= A;
    }
    while(decimal>0){
        S.push(decimal%B);
        decimal = decimal / B;
    }
        while(!S.empty()){
        cout<< S.top() << " ";
        S.pop();
    }
}
