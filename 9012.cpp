#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        string str;
        cin >> str;
        str += '\n';

        stack<int> S;
        for(char c : str) {
            if(c == '(') {
                S.push(1);
            } else if (c == ')') {
                if(S.empty()) {
                    cout << "NO" << "\n";
                    break;
                } 
                else {
                    S.pop();
                }
            } else if (c == '\n') {
                if(S.empty()) {
                    cout << "YES" << "\n";
                }
                else {
                    cout << "NO" << "\n";
                }
            }
        }
    }
}
