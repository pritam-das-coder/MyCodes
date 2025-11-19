// Write a program to reverse the array without using any extra array.
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>& v){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
void reverse(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    // int i=0,j=n-1;
    // while(i<j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    //reversePart(0,3,v);
    reverse(v);
    display(v);
    
}