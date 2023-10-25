#include <iostream>
using namespace std;
int main() {
    int n;
    bool check = 1;
    cout<<"enter how many character is in the word : ";
    cin>>n;
    char ch[n+1];
    cout<<"enter the word to be checked : ";
    cin>>ch;
    for(int i = 0; i<n; i++){
        if(ch[i] != ch[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check)
    cout<<"palindrome number";
    else
    cout<<"not a plaindrome number";
    return 0;
}
