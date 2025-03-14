#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    stack<char> S;

    bool ifword = true;
    int count =0;
    for(char c : str){
        count +=1; 
        if (!ifword) {
            if(c == '>') {
                cout << c ;
                ifword = true;
            } else {
                cout << c;
            }
        } else {
            if(c == '<' || c == ' ') {
                while(!S.empty()) {
                    cout << S.top();
                    S.pop();
                }
                cout << c ;
                if(c == '<') { ifword = false; }
            } else if(count==str.length()){
                cout << c;
                while(!S.empty()) {
                    cout << S.top();
                    S.pop();
                }
            } else {
                S.push(c);
            }
        }
    }
}
