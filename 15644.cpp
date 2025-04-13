#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int result[10];
void func(int index, int arrIndex, int n, int m){
    if(index == m){
        for(int i=0; i<index; i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    } else {
        for(int i=arrIndex; i<n; i++){
            result[index] = arr[i];
            func(index+1, i+1, n, m);
            while(i+1<n && arr[i+1]==arr[i]){
                i++;
            }
        }
        return;
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    // func();
    func(0,0,N,M);
}
