//Write a program to check whether a given character is a vowel or a consonant.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a character : ";
    char ch;
    cin>>ch;
    if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<ch<<" is a vowel";
        }
        else{
            cout<<ch<<" is a consonant";
        }
    }
    else{
        cout<<ch<<" is not an alphabet";
    }
}