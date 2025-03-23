#include <iostream>
using namespace std;

int arr[1001] = {};
int func(int x){
    if(x==1) {return 1;}
    if(x==2) {return 3;}
    if(arr[x]>0) {
        return arr[x];
    }
    arr[x]=(func(x-1)+2*func(x-2))%10007;
    return arr[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    cout << func(N);
}
