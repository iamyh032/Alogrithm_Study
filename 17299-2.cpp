#include <iostream>
#include <stack>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int* arr = new int[n];
    int* goal = new int[n]();
    int* count = new int[1000000]();

    for(int i=0; i<n; i++){
        cin >> arr[i];
        count[arr[i]] += 1;
    }

    for(int i=0; i<n; i++){
        goal[i] = count[arr[i]];
    }

    stack<int> S; // store index
    for(int i=0; i<n; i++){
        if(S.empty()){
            S.push(i);
        } else if(goal[i]<=goal[S.top()]){
            S.push(i);
        } else if(goal[i]>goal[S.top()]){
            while(!S.empty() && goal[i]>goal[S.top()]){
                goal[S.top()] = arr[i];
                S.pop();
            }
            S.push(i);
        }
    }

    while (!S.empty())
    {
        goal[S.top()] = -1;
        S.pop();
    }
    
    for(int i=0; i<n; i++){
        cout << goal[i] << " ";
    }

    delete[] arr;
    delete[] goal;

}
