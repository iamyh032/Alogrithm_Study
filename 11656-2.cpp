#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    string str;
    cin >> str;
    int n = str.length();
    string* arr = new string[n];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            arr[i] += str[j];
        }
    }

    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

    delete[] arr;
}
