// Write a program to copy the contents of one array into another in the reverse order.
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v1.push_back(k);
    }
    int size=v1.size();
    vector<int> v2(size);
    for(int i=0;i<size;i++){
        v2[i]=v1[size-1-i];
    }
    cout<<"Given Vector : "<<endl;
    display(v1);
    cout<<"Reversed Vector : "<<endl;
    display(v2);
}