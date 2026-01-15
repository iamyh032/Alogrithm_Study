#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    bool* Primes = new bool[N+1];
    Primes[1] = 0;

    for(int i=2; i<= N; i++){
        Primes[i] = true;
    }
    for(int i=2; i*i<=N; i++){
        if(Primes[i]) {
            for(int j=i*i; j<=N; j+=i){
                Primes[j] = false;
            }
        }
    }

    for(int i=M; i<=N; i++){
        if(Primes[i]){
            cout << i << '\n';
        }
    }
}
