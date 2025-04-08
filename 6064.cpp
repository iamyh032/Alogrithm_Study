#include <iostream>
using namespace std;

long long int GCD(int a, int b){
    while(b!=0){
        int temp = a;
        a = b;
        b = temp%b; 
    }
    return a;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        long long int LCM = M*N / GCD(M,N);
        bool found = false;
        while(x<=LCM && y<=LCM){
            if(x==y){
                cout << x << "\n";
                found = true;
                break;
            } else if(x<y){
                x += M;
            } else if(x>y){
                y += N;
            }
        }
        if(!found) { cout << "-1" << "\n"; }
    }
}
