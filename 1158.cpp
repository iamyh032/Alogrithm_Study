#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> Q;
    queue<int> result;
    for(int i=0; i<N; i++) {
        Q.push(i+1);
    }

    while(!Q.empty()) {
        for(int i=0; i<K-1; i++){
            Q.push(Q.front());
            Q.pop();
        }
        result.push(Q.front());
        Q.pop();
    }

    cout << "<" << result.front();
    result.pop();
    while(!result.empty()) {
        cout << ", " << result.front();
        result.pop();
    }
    cout << ">";
}
