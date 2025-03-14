#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> S;
    string str;
    int sum = 0;
    char before;

    cin >> str;
    for(char c : str) {
        if(c == '(') {
            S.push(c);
            before = c;
        } else if(c == ')') {
            if(before == '(') {
                // laser 일때
                S.pop();
                sum += S.size();
            } else if(before == ')') {
                S.pop();
                sum += 1;
            }
            before = ')';
        }
    }

    cout << sum;
}
