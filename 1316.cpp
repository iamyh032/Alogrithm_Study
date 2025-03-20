#include <iostream>
#include <string>
using namespace std;

// 그룹 단어이면 true, 아니면 false
bool checker(string str){

    if(str.length() == 1 || str.length() == 2) { return true; }
    bool check[26] = {};
    for(int i=0; i<str.length()-1; i++){
        if(check[str[i]-'a'] == true) {
            return false;
        } else if(str[i]!=str[i+1]) {
            check[str[i]-'a'] = true;
        }
    }
    if(check[str[str.length()-1]-'a'] == true){
        return false;
    } else {
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;

    int count = 0;
    while(N--){
        string str;
        cin >> str;
        if(checker(str) == true) { count++; }
    }

    cout << count;
}
