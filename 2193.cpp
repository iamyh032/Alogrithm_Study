#include <iostream>
using namespace std;

int main() {
    long long int arr[91][2];
    arr[1][0] = 0; arr[1][1] = 1;
    arr[2][0] = 1; arr[2][1] = 0;
    for(int n=3; n<91; n++){
        arr[n][0] = arr[n-1][0]+arr[n-1][1];
        arr[n][1] = arr[n-1][0];
    }
    int N;
    cin >> N;
    cout << arr[N][0]+arr[N][1];
}
