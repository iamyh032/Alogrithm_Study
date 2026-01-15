#include <iostream>
using namespace std;
bool Prime[1000001];
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    Prime[1] = 0;
    for(int i=2; i<=1000000; i++){
        Prime[i] = 1;
    }
    for(int i=2; i<=1000; i++){
        if(Prime[i]) {
            for(int j=i*i; j<=1000000; j+=i){
                Prime[j] = 0;
            }
        }
    }

    int n;
    cin >> n;
    while(n!=0){
        int i;
        for(i=3; i<=n/2; i+=2){
            if(Prime[i] && Prime[n-i]){
                cout << n << " = " << i << " + " << n-i << '\n';
                break;
            }
        }
        if(i>n/2) {cout << "Goldbach's conjecture is wrong.\n";}

        cin >> n;
    }
    return 0;
}
