#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int MOD = 1000000000;

    // a[n][i]는 N자리 수에서 끝자리 수가 i인 것의 개수
    int** a = new int*[N+1];
    for(int n=1; n<=N; n++){
        a[n] = new int[10];
        if(n==1) {
            a[n][0]=0;
            for(int i=1; i<10; i++){
                a[n][i] = 1;
            }
        } else {
            a[n][0] = a[n-1][1];
            a[n][9] = a[n-1][8];
            for(int i=1; i<9; i++){
                a[n][i] = (a[n-1][i-1]%MOD+a[n-1][i+1]%MOD)%MOD;
            }
        }
    }

    long long int count =0;
    for(int i=0; i<10; i++){
        count += a[N][i] ;
        count %= MOD;
    }
    cout << count;

    for(int n=1; n<=N; n++){
        delete[] a[n];
    }
    delete[] a;
}
