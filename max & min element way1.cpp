#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the no. of elements required: ";
    cin>>n;
    int arr[n]; 
    int max = arr[0];
    int min = arr[0];
    cout<<"enter the elements";
     for(int i =0; i<n; i++){
        cin>>arr[i];
        cout<<"the "<<(i+1)<<" no. array element is "<<arr[i]<<endl;
    }
    for(int i =0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}
