#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* filled = new int[N];
    int* unfilled = new int[N];

    filled[0] = 2; unfilled[0] = 1;
    int MOD = 9901;
    for(int i=1; i<N; i++){
        filled[i] = (filled[i-1] + 2*unfilled[i-1])%MOD;
        unfilled[i] = (filled[i-1] + unfilled[i-1])%MOD;
    }

    cout << (filled[N-1]+unfilled[N-1])%MOD;
}
