#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool prime[1000001] = {}; // true으로 초기화, prime이면 false
    int primeArray[100000];
    int index = 0;
    for(int i=2; i<1000001; i++){
        if(prime[i]==false){
            primeArray[index++] = i;
            if(i<= 1000){
                for(long long int j=i*i; j<1000001; j=j+i){
                    prime[j] = true;
                }
            }
        }
    }

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        int count = 0;
        for(int i=0; i<index; i++){
            if(primeArray[i] <= N/2){
                if(prime[N-primeArray[i]] == false){
                    count += 1;
                }
            }
        }

        cout << count << '\n';
    }  
}
