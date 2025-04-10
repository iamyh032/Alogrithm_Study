#include <iostream>
using namespace std;

int result[10] = {};
bool isUsed[10] = {};
void func(int index, int n, int m){
    if(index==m){
        for(int i=0; i<index; i++){
            cout << result[i] << " ";            
        }
        cout << "\n";
        return;
    }

    for(int i=1; i<=n; i++){
        if(isUsed[i]) {
            continue;
        }
        isUsed[i] = true;
        result[index] = i;
        func(index+1, n, m);
        isUsed[i] = false;
    }
    return;
}

int main(){
    int N, M;
    cin >> N >> M;
    func(0, N, M);

}
