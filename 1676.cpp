#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int N;
    cin >> N;
    for(int i=5; i<=N; i*=5){
        sum += N/i;
    }
    cout << sum ;
}
