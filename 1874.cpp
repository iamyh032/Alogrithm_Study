#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }

    
    int index = 0;
    stack<int> S;
    string output = "";
    while(n--) {
        int x;
        cin >> x;

        if(S.empty()) {
            S.push(arr[index++]);
            output += "+";
        }

        if (x < S.top()) {
            cout << "NO" << "\n";
            return 0;
        } else {
            while (x > S.top()) {
                S.push(arr[index++]);
                output += "+";
            }
            S.pop();
            output += "-";
        }
    }
    for(char c : output) {
        cout << c << "\n"; 
    }
}
