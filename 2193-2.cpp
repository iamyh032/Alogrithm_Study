#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long int** arr = new long int*[N+1];
    for(int i=1; i<=N; i++){
        arr[i] = new long int[2];
    }

    arr[1][0] = 0; arr[1][1] = 1;

    for(int i=2; i<=N; i++){
        arr[i][0] = arr[i-1][0]+arr[i-1][1];
        arr[i][1] = arr[i-1][0];
    }

    cout << arr[N][0]+arr[N][1] << "\n";

    for(int i=1; i<=N; i++){
        delete[] arr[i];
    }
    delete[] arr;
}
