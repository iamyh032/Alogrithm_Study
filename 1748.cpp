#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long int sum = 0;
    int count = 1;
    int i=10;
    while(1){
        if(N/i==0){
            sum += (N+1-(i/10))*count;
            break;
        } else {
            sum += 9*(i/10)*count;
            i *= 10;
            count += 1;
        }
    }
    cout << sum;
}
