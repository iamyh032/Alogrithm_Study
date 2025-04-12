#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int result[10] = {};
bool isUsed[10001] = {};
void func(int index, int n, int m){
    if(index == m){
        for(int i=0; i<index; i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(isUsed[arr[i]]){
            continue;
        }
        result[index] = arr[i];
        isUsed[arr[i]] = true;
        func(index+1, n, m);
        isUsed[arr[i]] = false;
    }
    return;
}

int main(){
    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    func(0, N, M);
}
