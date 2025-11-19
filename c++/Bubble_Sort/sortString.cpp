// Sort a String in decreasing order of values
// associated after removal of values smaller than X.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string str="";
    int l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]>='X') str+=s[i];
    }
    l=str.size();
    for(int i=0;i<l-1;i++){
        bool flag=true;
        for(int j=0;j<l-1-i;j++){
            if(str[j]<str[j+1]){
                flag=false;
                swap(str[j],str[j+1]);
            }
        }
        if(flag) break;
    }
    // sort(str.begin(),str.end());
    // reverse(str.begin(),str.end());
    cout<<str;
}