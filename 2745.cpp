#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int B; 
    cin >> B;

    int decimal =0, r=1;
    for(int i=str.length()-1; i>=0; i--){
        int temp;
        if(str[i]-'A'>=0){
            temp = str[i]-'A'+10;
        } else {
            temp = str[i]-'0';
        }
        decimal += r*temp;
        r *= B;
    }
    cout << decimal;
}
