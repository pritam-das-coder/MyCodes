// Move all negative numbers to beginning and positive to end with constant extra space.
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void arrange(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[j]<0){
            swap(v[i],v[j]);
            i++;
        }
        else j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(4);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-6);
    v.push_back(8);
    // v.push_back(1);
    // v.push_back(0);
    display(v);
    arrange(v);
    display(v);
}