#include <iostream>
using namespace std;
bool arr[1000001];
int onlyPrimes[500000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    int index=0;
    for(int i=2; i*i<=1000000; i++){
        if(!arr[i]){
            onlyPrimes[index++] = i;
            for(int j=i*2; j<=1000000; j+=i){
                arr[j] = true;
            }
        }
    }
    for(int i=1000; i<=1000000; i++){
        if(!arr[i]){
            onlyPrimes[index++] = i;
        }
    }
    while(T--){
        int N;
        cin >> N;
        int count = 0;
        for(int i=0; i<index-1; i++){
            if(onlyPrimes[i]>N/2) {break;}
            if(!arr[N-onlyPrimes[i]]) {
                count += 1;
            }
        }
        cout << count << "\n";
    }
}
