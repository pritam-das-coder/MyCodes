#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
float findMaxProfit(vector<int>& P, vector<int>& W, vector<float>& X, int n, int M){
    vector< pair<float,int> > R(n);
    for(int i=0;i<n;i++){
        R[i].first=(P[i]*1.0)/W[i];
        R[i].second=i;
    }
    sort(R.begin(),R.end());
    reverse(R.begin(),R.end());
    int cc=M;
    float x=0;
    for(int i=0;i<n;i++){
        int idx=R[i].second;
        if((cc-W[idx])>=0){
            x+=P[idx];
            cc-=W[idx];
            X[idx]=1;
        }
        else{
            x+=P[idx]*((cc*1.0)/W[idx]);
            X[idx]=(cc*1.0)/W[idx];
            cc=0;
        }
    }
    return x;
}
int main(){
    int P[]={10,5,15,7,6,18,3};
    int W[]={2,3,5,7,1,4,1};
    int n=sizeof(P)/sizeof(P[0]);
    int M=15;
    vector<int> p(P,P+n);
    vector<int> w(W,W+n);
    vector<float> x(n);
    float mp=findMaxProfit(p,w,x,n,M);
    cout<<"Maximum Profit : "<<mp<<endl;
    cout<<"Required Solution Vector : "<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
}