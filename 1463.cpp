#include <iostream>
using namespace std;

int arr[1000000] = {};
int func(int x){
    if(x==1) {return 0;}

    if(arr[x]>0){
        return arr[x];
    } 

    arr[x] = func(x-1)+1;
    if(x%2==0) {
        int temp = func(x/2)+1;
        if(temp<arr[x]){
            arr[x] = temp;
        }
    } 
    if(x%3==0) {
        int temp = func(x/3)+1;
        if(temp<arr[x]){
            arr[x] = temp;
        }
    }
    return arr[x];   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;

    cout << func(N);
}
