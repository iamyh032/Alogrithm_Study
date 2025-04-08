#include <iostream>
using namespace std;

void change(int* arr, int x, int num){
    int i=x;
    while(i<7981){
        arr[i] += 1;
        i+=num;
    }
}

int main() {
    int E, S, M;
    cin >> E >> S >> M;
    int arr[7981] = {};
    change(arr, E, 15);
    change(arr, S, 28);
    change(arr, M, 19);

    for(int i=1; i<7981; i++){
        if(arr[i]==3){
            cout << i;
            break;
        }
    }
}
