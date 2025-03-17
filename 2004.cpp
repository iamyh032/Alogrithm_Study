#include <iostream>
using namespace std;

int countFive(int x){
    long long int r=5;
    int sum=0;
    while(x/r != 0){
        sum += x/r;
        r *= 5;
    }
    return sum;
}

int countTwo(int x){
    long long int r=2;
    int sum=0;
    while(x/r != 0){
        sum += x/r;
        r *= 2;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int sub = n-m;

    long long int countTWO = countTwo(n)-countTwo(m)-countTwo(sub);
    long long int countFIVE = countFive(n)-countFive(m)-countFive(sub);
    
    if(countFIVE < countTWO) {
        cout << countFIVE;
    } else {
        cout << countTWO;
    }
}
