#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int* arr = new int[N];
    int* up = new int[N];
    int* down = new int[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
        up[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                up[i] = max(up[i], up[j]+1);
            }
        }
    }

    int sum=0;
    for(int i=N-1; i>=0; i--){
        down[i] = 1;
        for(int j=N-1; j>i; j--){
            if(arr[i]>arr[j]){
                down[i] = max(down[i], down[j]+1);
            }
        }
        if(up[i]+down[i]>sum){
            sum = up[i]+down[i];
        }
    }

    cout << sum-1;

    delete[] arr;
    delete[] up;
    delete[] down;
}
