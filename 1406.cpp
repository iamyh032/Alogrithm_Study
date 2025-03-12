#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> S1;
    stack<char> S2;
    for(char c : str) {
        S1.push(c);
    }

    int n;
    cin >> n;

    while(n--) {
        char x;
        cin >> x;

        if (x == 'L') {
            if(!S1.empty()) {
                char top = S1.top();
                S1.pop();
                S2.push(top);
            }
        } else if (x == 'D') {
            if(!S2.empty()) {
                char top = S2.top();
                S2.pop();
                S1.push(top);
            }
        } else if (x == 'B') {
            if(!S1.empty()) {
                S1.pop();
            }
        } else if (x == 'P') {
            cin >> x;
            S1.push(x);
        }
    }

    while(!S1.empty()) {
        char top = S1.top();
        S1.pop();
        S2.push(top);
    }

    while(!S2.empty()) {
        cout << S2.top();
        S2.pop();
    }

    return 0;
}
