#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int count;
    cin >> count;
    cin.ignore();

    while(count--){
        string str;
        getline(cin, str);
        stack<char> S;
        bool Flag = 0;
        for(char c : str){
            if(c=='('){
                S.push(c);
            } else if(c==')') {
                if(!S.empty()){
                    S.pop();
                } else {
                    Flag=1;
                    break;
                }
            }
        }
        if(!S.empty() || Flag){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
