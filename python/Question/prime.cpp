#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int nn=0;
    for(int i=0;i<n;i++){
        if(v[i]<0) nn++;
    }
    if(nn==k){
        for(int i=0;i<n;i++){
            if(v[i]<0) v[i]=-v[i];
        }
    }
    else if(k<nn){
        for(int i=0;i<k;i++){
            int min=INT_MAX;
            int minidx=-1;
            for(int j=0;j<n;j++){
                if(min>v[i]){
                    min=v[i];
                    minidx=i;
                }
            }
            v[minidx]=-v[minidx];
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]<0) v[i]=-v[i];
        }
        for(int i=0;i<(k-nn);i++){
            int min=INT_MAX;
            int minidx=-1;
            for(int j=0;j<n;j++){
                if(min>v[i]){
                    min=v[i];
                    minidx=i;
                }
            }
            v[minidx]=-v[minidx];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<sum;
	return 0;
}
