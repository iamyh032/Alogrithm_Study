#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int *arr = new int[n];
    int *dp1 = new int[n];
    int *dp2 = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        dp1[i] = 1;
        dp2[n-i-1] = 1;
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                dp1[i] = max(dp1[i], dp1[j]+1);
            }
            if(arr[n-i-1]>arr[n-1-j]){
                dp2[n-i-1] = max(dp2[n-i-1], dp2[n-1-j]+1);
            }
        }
    }
    int maxVal=0;
    for(int i=0; i<n; i++){
        maxVal = max(maxVal, dp1[i]+dp2[i]-1);
    }
    cout << maxVal;
    delete[] arr;
    delete[] dp1;
    delete[] dp2;
}
