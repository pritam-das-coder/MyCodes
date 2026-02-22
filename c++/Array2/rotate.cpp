// Rotate the given array ‘a’ by k steps, where k is non-negative.
// Note : k can be greater than n as well where n is the size of array ‘a’.
#include <iostream>
#include <vector>
#include <algorithm>
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
void rotate2(vector<int>& v,int k){
    if(k==0) return;
    //reverse(v.begin(),v.end());
    reversePart(0,v.size()-1,v);
    reversePart(0,k-1,v);
    reversePart(k,v.size()-1,v);
}
// void rotate(vector<int>& a,int k){
//     for(int i=1;i<=k;i++){
//         int l=a[a.size()-1];
//         for(int i=a.size()-1;i>0;i--){
//             a[i]=a[i-1];
//         }
//         a[0]=l;
//     }
// }
int main(){
    vector<int> v;
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter no. of steps to be rotated : ";
    cin>>k;
    k=k%n;
    //rotate(v,k);
    rotate2(v,k);
    display(v);
}