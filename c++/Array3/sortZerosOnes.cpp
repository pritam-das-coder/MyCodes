#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// void sort01(vector<int>& v){
//     int noz=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) noz++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<=noz-1) v[i]=0;
//         else v[i]=1;
//     }
// }
void sort01TwoPointer(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[j]==0){
            swap(v[i],v[j]);
            i++;
        }
        else j--;
    }
}
int main(){
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int size;
        cin>>size;
        vector<int> v;
        for(int j=0;j<size;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort01TwoPointer(v);
        display(v);
    }
    // display(v);
    //sort01(v);
    // sort01TwoPointer(v);
    // display(v);
}