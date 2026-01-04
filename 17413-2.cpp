#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print_stack(stack<char>& S){
    while(!S.empty()){
        cout << S.top() ;
        S.pop();
    }
}
int main(){
    string str;
    getline(cin, str);
    stack<char> S;
    bool ifTag = false;
    for(char c : str){
        if(c == '<'){
            print_stack(S);
            cout << c;
            ifTag = true;
        } else if(c == '>'){
            cout << c;
            ifTag = false;
        } else if(ifTag){
            cout << c;
        } else if(c == ' '){
            print_stack(S);
            cout << ' ';
        } else {
            S.push(c);
        }
    }
    print_stack(S);
}
