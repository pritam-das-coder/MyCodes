#include <iostream>
#include <vector>
using namespace std;
void fill(vector<vector<int>>& v){
    int n=v.size();
    int minr=0,maxr=n-1,minc=0,maxc=n-1;
    int k=0,tne=n*n,ele=1;
    while (k<tne){
        // right
        for(int j=minc;j<=maxc && k<tne;j++){
            v[minr][j]=ele;
            ele++;
            k++;
        }
        minr++;
        // down
        for(int i=minr;i<=maxr && k<tne;i++){
            v[i][maxc]=ele;
            ele++;
            k++;
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc && k<tne;j--){
            v[maxr][j]=ele;
            ele++;
            k++;
        }
        maxr--;
        // up
        for(int i=maxr;i>=minr && k<tne;i--){
            v[i][minc]=ele;
            ele++;
            k++;
        }
        minc++;
    }
    
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<vector<int>> a(n,vector<int> (n));
    fill(a);
    cout<<"Filled Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}