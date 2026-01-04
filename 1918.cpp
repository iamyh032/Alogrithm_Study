#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char c){
    if(c=='*' || c=='/'){
        return 3;
    } else if(c=='+' || c=='-'){
        return 2;
    } else if(c=='('){
        return 1;
    } else {
        return -1;
    }
}

int main(){
    string str;
    cin >> str;

    stack<char> S;
    for(char c : str){
        if(c == '('){
            S.push(c);
        } else if(c == ')'){
            while(S.top()!='('){
                cout << S.top();
                S.pop();
            }
            S.pop();
        } else if(c=='*' || c=='/' || c=='+' || c=='-'){
            while(!S.empty() && priority(c)<=priority(S.top())){
                cout << S.top();
                S.pop();
            }
            S.push(c);
        } else {
            cout << c;
        }
    }
    while(!S.empty()){
        cout << S.top();
        S.pop();
    }
}
