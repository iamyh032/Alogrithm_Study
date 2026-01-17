#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    while(a%b != 0){
        int temp = a;
        a=b;
        b=temp%b;
    }
    return b;
}

int main(){
    int N, S, A;
    cin >> N >> S;

    int GCD=0;
    cin >> A;
    int temp = max(S-A, A-S);
    N--;
    while(N--){
        cin >> A;
        if(S>A) {
            temp = gcd(temp, S-A);
        } else {
            temp = gcd(temp, A-S);
        }
    }

    cout << temp << "\n";
}
