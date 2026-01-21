#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int (*arr)[10] = new int[n+1][10];
    for(int j=0; j<10; j++){
        arr[1][j] = 1;
    }

    for(int i=2; i<=n; i++){
        arr[i][0] = arr[i-1][0];
        for(int j=1; j<10; j++){
            arr[i][j] = (arr[i][j-1] + arr[i-1][j])%10007;
        }
    }

    int sum=0;
    for(int j=0; j<10; j++){
        sum = (sum+arr[n][j])%10007;
    }

    cout << sum << "\n";
    delete[] arr;
}
