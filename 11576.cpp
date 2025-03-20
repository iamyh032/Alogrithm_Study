#include <iostream>
#include <stack>
using namespace std;

int main(){
    int A, B, m;
    cin >> A >> B ;
    cin >> m ;

    stack<long long int> S;
    for(int i=0; i<m; i++){
        long long int x;
        cin >> x;
        S.push(x);
    }
    long long int r = 1;
    long long int DECIMAL = 0;
    for(int i=0; i<m; i++){
        DECIMAL += S.top()*r;
        S.pop();
        r *= A;
    }
    
    while(DECIMAL != 0){
        S.push(DECIMAL % B);
        DECIMAL /= B;
    }
    while(!S.empty()){
        cout << S.top() << " ";
        S.pop();
    }
        
}
