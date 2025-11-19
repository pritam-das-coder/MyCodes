// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    if(l<=5){
        cout<<"Enter string of length greater than 5.";
        return 0;
    }
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
}