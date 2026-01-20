#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int length[1000];

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    length[0] = 1;
    int realMax = 1;
    for(int i=1; i<N; i++){
        length[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[i] > arr[j]){
                length[i] = max(length[i], length[j]+1); 
            }
        }
        realMax = max(realMax, length[i]);
    }
    cout << realMax << "\n";
}
