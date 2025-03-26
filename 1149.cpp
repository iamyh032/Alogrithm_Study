#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int** cost = new int*[N+1];
    for(int i=1; i<=N; i++){
        cost[i] = new int[3];
    }

    cin >> cost[1][0] >> cost[1][1] >> cost[1][2];
    for(int i=2; i<=N; i++){
        int R, G, B;
        cin >> R >> G >> B;

        cost[i][0] = min(cost[i-1][1]+R, cost[i-1][2]+R);
        cost[i][1] = min(cost[i-1][0]+G, cost[i-1][2]+G);
        cost[i][2] = min(cost[i-1][0]+B, cost[i-1][1]+B);
    }
    
    sort(cost[N], cost[N]+3);
    cout << cost[N][0];

    for(int i=1; i<=N; i++){
        delete[] cost[i];
    }
    delete[] cost;
}
