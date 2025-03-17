#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    stack<int> S;
    for(int i=0; i<n; i++){
        if(S.empty()) {
            S.push(i);
        } else if(arr[i] <= arr[S.top()] ) {
            S.push(i);
        } else if(arr[i] > arr[S.top()]) {
            while(1){
                if(S.empty() || arr [i] <= arr[S.top()]){
                    S.push(i);
                    break;
                }
                arr[S.top()] = arr[i];
                S.pop();
            }
        }
    }

    while(!S.empty()) {
        arr[S.top()] = -1;
        S.pop();
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
}
