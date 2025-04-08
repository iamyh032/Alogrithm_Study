#include <iostream>
using namespace std;

int lineMax(char **arr, int size, int row, int col){
    char middle = arr[row][col];
    int colMax=1;
    for(int i=row-1; i>=0; i--){
        if(arr[i][col] == middle){
            colMax += 1;
        } else {
            break;
        }
    }
    for(int i=row+1; i<size; i++){
        if(arr[i][col] == middle){
            colMax += 1;
        } else {
            break;
        }
    }
    int rowMax=1;
    for(int i=col-1; i>=0; i--){
        if(arr[row][i] == middle){
            rowMax += 1;
        } else {
            break;
        }
    }
    for(int i=col+1; i<size; i++){
        if(arr[row][i] == middle){
            rowMax += 1;
        } else {
            break;
        }
    }
    if(rowMax>colMax) {
        return rowMax;
    } else {
        return colMax;
    }
}

int find(char **arr, int size, int row, int col){
    int max=0;
    if(row != 0){
        char temp = arr[row][col];
        arr[row][col] = arr[row-1][col];
        arr[row-1][col] = temp;
        int thisMax = lineMax(arr, size, row, col);
        if(thisMax > max){
            max = thisMax;
        }

        arr[row-1][col] = arr[row][col];
        arr[row][col] = temp;
    }
    if(row != size-1){
        char temp = arr[row][col];
        arr[row][col] = arr[row+1][col];
        arr[row+1][col] = temp;
        int thisMax = lineMax(arr, size, row, col);
        if(thisMax > max){
            max = thisMax;
        }

        arr[row+1][col] = arr[row][col];
        arr[row][col] = temp;
    }
    if(col != 0) {
        char temp = arr[row][col];
        arr[row][col] = arr[row][col-1];
        arr[row][col-1] = temp;
        int thisMax = lineMax(arr, size, row, col);
        if(thisMax > max){
            max = thisMax;
        }
        arr[row][col-1] = arr[row][col];
        arr[row][col] = temp;
    }
    if(col != size-1){
        char temp = arr[row][col];
        arr[row][col] = arr[row][col+1];
        arr[row][col+1] = temp;
        int thisMax = lineMax(arr, size, row, col);
        if(thisMax > max){
            max = thisMax;
        }
        arr[row][col+1] = arr[row][col];
        arr[row][col] = temp;
    }
    return max;
}

int main() {
    int N;
    cin >> N;
    char **arr = new char*[N];
    for(int i=0; i<N; i++){
        arr[i] = new char[N];
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }

    int all = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int value = find(arr, N, i, j);
            if(value > all){
                all = value;
            }
        }
    }

    cout << all;

    for(int i=0; i<N; i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
