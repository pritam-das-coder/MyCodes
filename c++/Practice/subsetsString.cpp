#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<string>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
// void printSubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     printSubset(ans,original.substr(1));
//     printSubset(ans+original[0],original.substr(1));
// }
void storeSubset(string ans,string original,int idx,vector<string>& sub){
    if(idx==original.length()){
        sub.push_back(ans);
        return;
    }
    storeSubset(ans,original,idx+1,sub);
    storeSubset(ans+original[idx],original,idx+1,sub);
}
int main(){
    vector<string> v;
    storeSubset("","abc",0,v);
    printVector(v);
}