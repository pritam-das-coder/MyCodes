// Print subsets of a string with unique characters.
#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;
void subset(string ans,string original,vector<string>& v){
    if(original.length()==0){
        v.push_back(ans);
        //cout<<ans<<endl;
        return;
    }
    subset(ans+original[0],original.substr(1),v);
    subset(ans,original.substr(1),v);
}
// void subset(string ans,string original,int i){
//     if(i==original.length()){
//         cout<<ans<<endl;
//         return;
//     }
//     subset(ans+original[i],original,i+1);
//     subset(ans,original,i+1);
// }
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"Subsets are : "<<endl;
    vector<string> v;
    subset("",str,v);
    for(string x:v){
        cout<<x<<endl;
    }
    //subset("",str,0);
}