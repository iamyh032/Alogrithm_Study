#include <iostream>
using namespace std;

bool isUsed[10] = {};
int result[10] = {};

void func(int index, int n, int m){
    if(index==m) {
        for(int i=0; i<index; i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=result[index-1]+1; i<=n; i++){
        isUsed[i] = true;
        result[index] = i;
        func(index+1, n, m);
        isUsed[i] = false;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    func(0, N, M);
}
