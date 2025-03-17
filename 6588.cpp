#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    bool prime[1000001] = {}; // 다 false
    vector<int> primeList;
    for(int i=2; i<=1000; i++){
        if(prime[i] == false) {
            primeList.push_back(i);
            for(int j=i*i; j<1000000; j+=i){
                prime[j] = true; // true 이면 소수 아님
            }
        }
    }
    for(int i=1001; i<1000000; i++){
        if(prime[i] == false) {
            primeList.push_back(i);
        }
    }

    while(1){
        int n;
        cin >> n;
        if(n==0) { break; }

        bool flag = false;
        for(int i=1; ; i++){
            if(prime[n-primeList[i]] == false){
                flag = true;
                cout << n << " = " << primeList[i] << " + " << n-primeList[i] << "\n";
                break;
            }
        }
        if(!flag) { cout << "Goldbach's conjecture is wrong." << "\n"; }
    }
}
