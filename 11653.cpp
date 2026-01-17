#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int* primes = new int[N];
    bool* notPrime = new bool[N+1]();
    int primeIndex =0;
    for(int i=2; i<=N; i++){
        if(!notPrime[i]){
            primes[primeIndex++]=i;
            for(int j=i*2; j<=N; j+=i){
                notPrime[j] = 1;
            }
        }
    }

    primeIndex =0;
    while(N!=1){
        if(N%primes[primeIndex] ==0){
            cout << primes[primeIndex] << "\n";
            N = N/primes[primeIndex] ;
        } else {
            primeIndex++;
        }
    }
}
