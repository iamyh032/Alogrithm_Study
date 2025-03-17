#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    bool* arr = new bool[N+1];
    arr[1] = false;
    for(int i=2; i<N+1; i++){
        arr[i] = true;
    }

    for(int i=2; i*i <= N; i++){
        if(arr[i]){
            for(int r=i*i; r<=N; r+=i){
                arr[r] = false;
            }
        }
    }

    for(int i=M; i<N+1; i++){
        if(arr[i]){
            cout << i << "\n";
        }
    }    
}
