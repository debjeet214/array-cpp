#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"enter the no. of elements required: ";
    cin>>n;
    int arr[n]; 
    int max_no = INT_MIN;
    int min_no = INT_MAX;
    cout<<"enter the elements";
     for(int i =0; i<n; i++){
        cin>>arr[i];
        cout<<"the "<<(i+1)<<" no. array element is "<<arr[i]<<endl;
    }
    for(int i =0; i<n; i++){
       max_no = max(max_no, arr[i]);
       min_no = min(min_no, arr[i]);
    }
    cout<<max_no<<" "<<min_no;
    return 0;
}
