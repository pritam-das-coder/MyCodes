#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>& v){
    int n=v.size();
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    // swap the rows
    for(int i=0;i<(n/2);i++){
        vector<int> a;
        a=v[i];
        v[i]=v[n-1-i];
        v[n-1-i]=a;
    }
}
int main(){
    vector<vector<int>> v;
    int size;
    cout<<"Enter rows/cols of array : ";
    cin>>size;
    cout<<"Enter all elements of array : "<<endl;
    for(int i=0;i<size;i++){
        vector<int> a;
        for(int j=0;j<size;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    rotate(v);
    cout<<"Rotated Matrix : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}