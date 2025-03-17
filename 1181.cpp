#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string& a, string& b){
    if(a.length()==b.length()){
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main () {
    int n;
    cin >> n;

    string* arr = new string[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, comp);
    
    cout << arr[0] << '\n';
    for(int i=1; i<n; i++){
        if(arr[i] != arr[i-1]){
            cout << arr[i] << '\n';
        }
    }
    delete[] arr;
}
