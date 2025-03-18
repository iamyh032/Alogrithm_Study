#include <iostream>
using namespace std;

int GCD(int a, int b){

    while(a%b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        long int sum = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                sum += GCD(arr[i], arr[j]);
            }
        }
        
        cout << sum << '\n';
	delete[] arr;
    }
}
