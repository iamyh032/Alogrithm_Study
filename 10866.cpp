#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> D;
    while(n--) {
        string str;
        cin >> str;

        if (str == "push_front") {
            int x;
            cin >> x;
            D.push_front(x);
        } else if (str == "push_back") {
            int x;
            cin >> x;
            D.push_back(x);
        } else if (str == "pop_front") {
            if(!D.empty()) {
                cout << D.front() << "\n";
                D.pop_front();
            } else {
                cout << -1 << "\n";
            }
        } else if (str == "pop_back") {
            if(!D.empty()) {
                cout << D.back() << "\n";
                D.pop_back();
            } else {
                cout << -1 << "\n";
            }
        } else if (str == "size") {
            cout << D.size() << "\n";
        } else if (str == "empty") {
            cout << int(D.empty()) <<"\n";
        } else if (str == "front") {
            if(!D.empty()) {
                cout << D.front() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if (str == "back") {
            if(!D.empty()) {
                cout << D.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}
