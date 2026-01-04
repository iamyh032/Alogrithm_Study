#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack<int> S;
    string str;
    cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='('){
            S.push(0);
        } else if(str[i]==')'){
            if(str[i-1]==')'){
                sum += 1;
                S.pop();
            } else if(str[i-1]=='('){
                // if Laser
                S.pop();
                sum += S.size();
            }
        }
    }
    cout << sum;
}
