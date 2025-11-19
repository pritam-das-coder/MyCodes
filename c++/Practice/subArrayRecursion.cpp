#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> ans,vector<int>& v,bool flag,int idx){
    if(idx==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else if(ans.size()==0){
        print(ans,v,true,idx+1);
        ans.push_back(v[idx]);
        print(ans,v,true,idx+1);
    }
    else{
        print(ans,v,false,idx+1);
        if(flag==true){
            ans.push_back(v[idx]);
            print(ans,v,true,idx+1);
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int> ans;
    print(ans,v,true,0);
}