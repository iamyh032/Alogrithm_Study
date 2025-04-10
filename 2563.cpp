#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool arr[100][100];
    for(int i=0; i<100; i++){
        fill(arr[i], arr[i]+100, false);
    }
    while(n--){
        int x, y;
        cin >> x >> y;
        for(int i=x; i<x+10; i++){
            for(int j=y; j<y+10; j++){
                arr[i][j] = true;
            }
        }
    }

    int count = 0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j]) { count++; }
        }
    }
    cout << count;
}
