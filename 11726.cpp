#include <iostream>
using namespace std;

int arr[1001] = {};
int func(int x){
    if(x==1 || x==2) {return x;} 
    if(arr[x]>0) {
        return arr[x];
    }
    arr[x]=(func(x-1)+func(x-2))%10007;
    return arr[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    cout << func(N);
}
