#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter how many character you want in line ";
    cin>>n;
    cin.ignore();
    char ch[n+1];
    cout<<"enter the line to be checked : ";
    cin.getline(ch,n);
    cin.ignore();
    int i =0;
    int currlen = 0, maxlen = 0;
    while(1){
        if(ch[i] == " " || ch[i] == '\0'){
            if(currlen>maxlen){
                maxlen = currlen;
            }
            currlen = 0;
        }
        else
        currlen++;
        if(ch[i] == '\0');
        break;
        i++;
    }
    cout<<maxlen<<endl;
   
    return 0;
}
