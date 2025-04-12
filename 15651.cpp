#include <iostream>
using namespace std;

int arr[10] = {};
void func(int index, int n, int m){
    if(index==m){
        for(int i=0; i<index; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        arr[index] = i;
        func(index+1, n, m);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    func(0, N, M);
}
