#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            for(int k=i;k<=j;k++)
                cout<<v[k]<<" ";
            cout<<endl;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    print(v);
}