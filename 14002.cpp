#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    int* dp = new int[N];
    queue<int>* Q = new queue<int>[N];

    int count=0, index=0;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        dp[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                if(dp[j]+1 > dp[i]){
                    dp[i] = dp[j]+1;
                    Q[i] = Q[j];
                } 
            }
        }
        Q[i].push(arr[i]);
        if(dp[i]>count){
            count = dp[i];
            index = i;
        }
    }

    cout << count << "\n";
    while(!Q[index].empty()){
        cout << Q[index].front() << " " ;
        Q[index].pop();
    }
}
