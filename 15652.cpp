#include <iostream>
using namespace std;

int arr[10] = {1};
void func(int index, int n, int m){
    if(index > m){
        for(int i=1; i<index; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=arr[index-1]; i<=n; i++){
        arr[index] = i;
        func(index+1, n, m);
    }
    return;
}

int main(){
    int N, M;
    cin >> N >> M;
    func(1, N, M);
}
