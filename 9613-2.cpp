#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a%b != 0){
        int temp = a;
        a = b;
        b = temp%b;
    }
    return b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int* arr = new int[m];
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }

        long int GCD=0;
        for(int i=0; i<m-1; i++){
            for(int j=i+1; j<m; j++){
                GCD += gcd(arr[i], arr[j]);
            }
        }
        cout << GCD << "\n";
        delete[] arr;

    }
}
