#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int arr[1000];

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int maxIndex = 0;

    queue<int> subs[N];
    subs[0].push(arr[0]);

    for(int i=1; i<N; i++){
        subs[i].push(arr[i]);
        for(int j=0; j<i; j++){
            if(arr[i] > arr[j]){
                if(subs[j].size()+1> subs[i].size()) {
                    subs[i] = subs[j];
                    subs[i].push(arr[i]);
                }
            }
        }
        if(subs[maxIndex].size() < subs[i].size()){
            maxIndex = i;
        }
    }
    cout << subs[maxIndex].size() << "\n";
    while(!subs[maxIndex].empty()){
        cout << subs[maxIndex].front() << " ";
        subs[maxIndex].pop();
    }
    
}
