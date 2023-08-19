#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[n][m];
    cout<<"enter the number of rows & colums in array : ";
    cin>>n>>m;
    cout<<"enter the array elements ";
    
    for(int i=0; i<n; i++){
            for(int j = 0; j<m; j++){
               cin>>arr[i][j];
        }
    }
    int row_start = 0, column_start = 0;
    int row_end = n-1, column_end = m-1;
    while(row_start<= row_end && column_start<= column_end){
        for(int c = column_start; c<= column_end; c++){
            cout<< arr[row_start][c]<<" ";
        }
        row_start++;
        for(int r = row_start; r<= row_end; r++){
            cout<< arr[r][column_end]<<" ";
        }
        column_end--;
        for(int c = column_end; c>= row_start; c--){
            cout<< arr[row_end][c]<<" ";
        }
        row_end--;
        for(int r = row_end; r>= row_start; r--){
            cout<< arr[r][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}
