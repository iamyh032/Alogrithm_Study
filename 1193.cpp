#include <iostream>
using namespace std;

int main(){
    int X;
    cin >> X;

    int sum = 0;
    for(int i=1; ;i++){
        sum += i;

        if(sum>=X){
            if(i%2==1){
                cout << 1+(sum-X) << "/" << i-(sum-X);
            } else{
                cout << i-(sum-X) << "/" << 1+(sum-X);
            }
            break;
        }
    }
}
