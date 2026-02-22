#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    int i=0,j=s.length()-1;
    while(i<j){
        char c=s[i],ch=s[j];
        
        if(c>='A' && c<='Z') c=(char)(c+32);
        else if(!((c>='a' && c<='z')||(c>='0' && c<='9'))){
            i++;
            continue;
        }

        if(ch>='A' && ch<='Z') ch=(char)(ch+32);
        else if(!((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))){
            j--;
            continue;
        }
        cout<<c<<" "<<ch<<endl;
        if(c!=ch){
            //cout<<c<<" "<<ch<<endl;
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
}