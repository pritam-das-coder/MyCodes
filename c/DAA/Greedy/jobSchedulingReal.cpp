#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findMaxProfit(vector<int>& d, vector<int>& P, vector<int>& J, int n){
    vector< pair<int,int> > M(n);
    for(int i=0;i<n;i++){
        M[i].first=P[i];
        M[i].second=i;
    }
    sort(M.begin(),M.end());
    reverse(M.begin(),M.end());
    int mp=0;
    for(int i=0;i<n;i++){
        int idx=M[i].second;
        for(int j=d[idx]-1;j>=0;j--){
            if(J[j]==0){
                J[j]=idx+1;
                mp+=P[idx];
                break;
            }
        }
    }
    return mp;
}
int main(){
    int d[]={4,4,4,4,3,4,3};
    int P[]={70,85,12,18,50,60,10};
    int n=sizeof(d)/sizeof(d[0]);
    vector<int> deadline(d,d+n);
    vector<int> profit(P,P+n);
    vector<int> J(n);
    cout<<"Maximum Profit : "<<findMaxProfit(deadline,profit,J,n)<<endl;
    cout<<"Job Sequence : "<<endl;
    for(int i=0;i<n;i++){
        cout<<J[i]<<" ";
    }
}