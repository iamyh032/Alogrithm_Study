#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    string str;
    cin >> str;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    stack<double> S;
    double result;
    for(char c : str){
        if(c-'A'>=0 && 'Z'-c>=0) {
            S.push(arr[int(c-'A')]);
        } else {
            double y = S.top();
            S.pop();
            double x = S.top();
            S.pop();

            if(c=='+') {
                result = x+y;
            } else if(c=='-'){
                result = x-y;
            } else if(c=='*'){
                result = x*y;
            } else if(c=='/'){
                result = x/y;
            }
            
            S.push(result);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << result;

    delete[] arr;
}
