#include <iostream>
using namespace std;
// nCm = n! / (n-m)! m!

int main(){
    long N, M;
    cin >> N >> M;

    long five1=0, five2=0, five3=0;
    long two1=0, two2=0, two3=0;

    for(long i=2; i<=N; i*=2){
        two1 += N/i;
    }
    for(long i=2; i<=N-M; i*=2){
        two2 += (N-M)/i;
    }
    for(long i=2; i<=M; i*=2){
        two3 += M/i;
    }
    two1 -= two2;
    two1 -= two3;

    for(long i=5; i<=N; i*=5){
        five1 += N/i;
    }
    for(long i=5; i<=N-M; i*=5){
        five2 += (N-M)/i;
    }
    for(long i=5; i<=M; i*=5){
        five3 += M/i;
    }
    five1 -= five2;
    five1 -= five3;

    if(five1>=two1){
        cout << two1;
    } else {
        cout << five1;
    }
}
