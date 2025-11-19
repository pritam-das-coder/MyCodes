// Input a string of length n and count all the vowels in the given string.
#include <iostream>
#include <string>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter n : ";
    // cin>>n;
    // char str[n];
    // int c=0;
    // for(int i=0;i<n;i++){
    //     cin>>str[i];
    //     if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u') c++;
    // }
    // cout<<c;
    int c=0;
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u') c++;
    }
    cout<<c;

}