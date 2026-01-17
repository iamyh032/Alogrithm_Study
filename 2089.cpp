#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==0) {
        cout << 0;
        return 0;
    }
    stack<int> S;
    while(n!=1){
        if(n<0){
            int temp = (-1)*n;
            if(temp%2 ==0) {
                S.push(0);
                n = temp/2;
            } else {
                S.push(1);
                n = temp/2 +1;
            }
        } else if(n>0){
            S.push(n%2);
            n = n/2;
            n *= -1;
        }
    }
    cout << n;
    while (!S.empty())
    {
        cout << S.top();
        S.pop();
    }
    
}
