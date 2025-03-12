#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> Q;
    while(n--) {
        string str;
        cin >> str;

        if (str == "push") {
            int x;
            cin >> x;
            Q.push(x);
        } else if (str == "pop") {

            if(!Q.empty()) {
                cout << Q.front() << "\n";
                Q.pop();
            } else {
                cout << -1 << "\n";
            }

        } else if (str == "front") {

            if(!Q.empty()) {
                cout << Q.front() << "\n";
            } else {
                cout << -1 << "\n";
            }

        } else if (str == "size") {

            cout << Q.size() << "\n";

        } else if (str == "empty") {
            
            cout << int(Q.empty()) << "\n";

        } else if (str == "back") {
            
            if(!Q.empty()) {
                cout << Q.back() << "\n";
            } else {
                cout << -1 << "\n";
            }

        }
    }
}
