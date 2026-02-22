#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void printMax(vector<int>& v,int m,int i){ // print max
    if(i==v.size()){
        cout<<m;
        return;
    }
    // if(m<v[i]) printMax(v,v[i],i+1);
    // else printMax(v,m,i+1);
    if(m<v[i]) m=v[i];
    printMax(v,m,i+1);
}
int printMax2(vector<int>& v,int i,int m){ // return max
    if(i==v.size()) return m;
    if(m<v[i]) m=v[i];
    return printMax2(v,i+1,m);
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(47);
    v.push_back(13);
    v.push_back(7);
    v.push_back(9);
    v.push_back(13);
    //printMax(v,INT_MIN,0);
    cout<<printMax2(v,0,INT_MIN);
}