// Given n strings consisting of digits from 0 to 9. Return the index of string which has maximum value. 
// (Take 0 based indexing)
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // vector<int> num(n);
    // for(int i=0;i<n;i++){
    //     num[i]=stoi(v[i]);
    // }
    int max_idx=0;
    for(int i=1;i<n;i++){
        if(stoi(v[max_idx])<stoi(v[i])) max_idx=i;
    }
    cout<<max_idx<<endl;
    cout<<v[max_idx];
}