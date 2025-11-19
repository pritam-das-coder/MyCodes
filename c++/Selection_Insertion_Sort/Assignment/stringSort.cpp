// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort 
// and display the sorted array.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void sortStringArray(vector<string>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag) break;
    }
}
int main(){
    vector<string> v;
    int n;
    cout<<"Enter size of arr : ";
    cin>>n;
    cout<<"Enter elements of arr : ";
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    sortStringArray(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    // string s1="apple",s2="abracadabra";
    // cout<<(s1<s2);
}