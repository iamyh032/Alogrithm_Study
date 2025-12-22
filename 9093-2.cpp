#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    
    int count;
    cin >> count;
    cin.ignore();

    string str;
    while(count--){
        stack<char> S;
        getline(cin, str);
        str += '\n';
        for(char c : str){
            if(c==' ' || c=='\n'){
                while(!S.empty()){
                    cout << S.top();
                    S.pop();
                }
                cout << " ";
            } else{
                S.push(c);
            }
        }
        cout << endl;
    }
}
