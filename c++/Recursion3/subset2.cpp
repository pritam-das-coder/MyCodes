#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printSubset(string ans,string original,int idx,bool flag){
    if(idx==original.length()){ // base
        cout<<ans<<endl;
        return;
    }
    // recursive
    if(idx==original.length()-1){
        if(flag==true) printSubset(ans,original,idx+1,true); // left
        printSubset(ans+original[idx],original,idx+1,true); // right
    }
    else if(original[idx]==original[idx+1]){
        if(flag==true) printSubset(ans,original,idx+1,true); // left
        printSubset(ans+original[idx],original,idx+1,false); // right
    }
    else{
        if(flag==true) printSubset(ans,original,idx+1,true); // left
        printSubset(ans+original[idx],original,idx+1,true); // right
    }
}
int main(){
    string s="abca";
    sort(s.begin(),s.end());
    printSubset("",s,0,true);
}
// https://www.youtube.com/watch?v=pNzljlzDCiI
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void storeSubset(string ans, string original, vector<string>& v, bool flag){
//     if(original == ""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     if(original.length() == 1){
//         if(flag == true)    storeSubset(ans+ch,original.substr(1), v, true);
//         storeSubset(ans,original.substr(1),v,true);
//         return; // taaki neeche ki do conditions na chale
//     }
//     char dh = original[1];
//     if(ch == dh){
//         if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,false);
//     }
//     else{
//         if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);
//         storeSubset(ans,original.substr(1),v,true);
//     }
// }
// void printVector(vector<string>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// }
// int main(){
//     string str = "abca";
//     sort(str.begin(),str.end());
//     vector<string> v;
//     storeSubset("",str,v,true);
//     printVector(v);
// }