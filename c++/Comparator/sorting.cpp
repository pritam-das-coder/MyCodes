#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // vector<pair<int,int>> v(n);
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v[i]={x,y};
    // }

    // sort(v.begin(),v.end());

    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    vector<int> v={4,1,5,7,2,0};

    sort(v.begin(),v.end(),greater<int>()); // build-in comparator

    for(int ele:v) cout<<ele<<" ";
}