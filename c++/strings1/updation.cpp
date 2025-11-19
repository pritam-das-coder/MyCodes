// Input a string of size n and Update all the even positions in the string to character ‘a’. Consider 
// 0-based indexing.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    char s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    s[n]='\0';
    for(int i=0;i<n;i++){
        if(i%2==0) s[i]='a';
    }
    cout<<s;
}