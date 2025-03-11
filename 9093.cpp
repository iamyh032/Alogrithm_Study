#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string sentence, word;
        getline(cin, sentence);
        istringstream ISS(sentence);
        while(ISS >> word){
            stack<char> S;
            for(int i=0; i<word.length(); i++){
                S.push(word[i]);
            }   
            while(!S.empty()) {
                cout << S.top();
                S.pop();
            }
            cout << " ";
        }
        cout << "\n";
    }

}
