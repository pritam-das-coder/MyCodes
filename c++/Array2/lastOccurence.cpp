// Find the last occurrence of x in the array.
#include <iostream>
#include <vector>
using namespace std;
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
    int x;
    cout<<"Enter the element : ";
    cin>>x;
    bool flag=false;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            flag=true;
            cout<<"Element found at index "<<i;
            break;
        }
    }
    if(flag==false) cout<<"Element not found";
}