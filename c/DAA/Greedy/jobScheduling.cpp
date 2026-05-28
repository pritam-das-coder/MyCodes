#include <iostream>
#include <vector>
using namespace std;
int findMaxProfit(vector<int>& d, vector<int>& P, vector<int>& J, int n){
    int mp=0;
    for(int i=0;i<n;i++){
        for(int j=d[i]-1;j>=0;j--){
            if(J[j]==0){
                J[j]=i+1;
                mp+=P[i];
                break;
            }
        }
    }
    return mp;
}
int main(){
    int n=6;
    int d[]={2,2,3,1,1,5};
    int P[]={30,28,20,18,12,5};
    vector<int> deadline(d,d+n);
    vector<int> profit(P,P+n);
    vector<int> J(n);
    cout<<"Maximum Profit : "<<findMaxProfit(deadline,profit,J,n)<<endl;
    cout<<"Job Sequence : "<<endl;
    for(int i=0;i<n;i++){
        cout<<J[i]<<" ";
    }
}