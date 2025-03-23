#include <iostream>
using namespace std;

int main() {
    int arr[11] = {};
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4; i<11; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }

    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        cout << arr[x] << "\n";
    }
}


