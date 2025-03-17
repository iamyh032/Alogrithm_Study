#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n = str.length();
    string* arr = new string[n];
    
    for(int i=0; i<n; i++){
        string suffix;
        for(int j=i; j<n; j++){
            suffix += str[j];
        }
        arr[i] = suffix;
    }

    sort(arr, arr+n);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << '\n';
    }
}
