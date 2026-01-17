#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    stack<int> S;
    int index = 0;
    if(str.length()%3 ==1){
        cout << str[0];
        index = 1;
    } else if(str.length()%3 ==2){
        cout << 2*(str[0]-'0')+(str[1]-'0');
        index = 2;
    }
    for(int i=str.length()-1; i-2>=index; i=i-3){
        S.push(4*(str[i-2]-'0')+2*(str[i-1]-'0')+(str[i]-'0'));
    }
    while(!S.empty()){
        cout << S.top();
        S.pop();
    }
}
