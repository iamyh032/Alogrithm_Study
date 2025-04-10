#include <iostream>
#include <string>
using namespace std;

int distance(int a, int b){
    if(a<b) {return b-a;}
    else {return a-b;}
}

int min(int a, int b){
    if(a<b) {return a;}
    else {return b;}
}
int main(){
    int N, M;
    cin >> N >> M;

    int ANS = distance(N, 100);
    bool broken[10] = {};
    while(M--){
        int x;
        cin >> x;
        broken[x] = true;
    }
    
    for(int i=0; i<1000000; i++){
        string str = to_string(i);
        bool flag = true;
        for(char c : str){
            if(broken[c-'0']) {
                flag = false;
                break;
            }
        }
        if(!flag) {continue;}
        ANS = min(ANS, str.length()+distance(i, N));
    }

    
    cout << ANS;
}
