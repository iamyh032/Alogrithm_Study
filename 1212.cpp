#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    if(str == "0") {
        cout << str; 
        return 0;
    }

    string arr[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    int length = str.length();

    int j=0;
    while(arr[str[0]-'0'][j] == '0'){
        j += 1;
    }

    while(j<3){
        cout << arr[str[0]-'0'][j++];
    }

    for(int i=1; i<length; i++){
        cout << arr[str[i]-'0'];
    }

}
