// Leetcode 42
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &v,int size){
    cout<<"Enter elements of vector : "<<endl;
    for (int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int trap(vector<int>& height){
    // prev greatest element array -> prev
    int n=height.size();
    int prev[n];
    prev[0]=-1;
    for(int i=1;i<n;i++){
        prev[i]=max(prev[i-1],height[i-1]);
    }
    // prev gets updated to minimum element array
    prev[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        int x=max(prev[i+1],height[i+1]);
        prev[i]=min(prev[i],x);
    }
    // prev -> mini
    // calculating water trapped
    int water=0;
    for(int i=1;i<=n-2;i++){
        if(prev[i]>height[i]) water+=prev[i]-height[i];
    }
    return water;
}
int main(){
    vector<int> height;
    int n;
    cout<<"Enter size of vector: "<<endl;
    cin>>n;
    input(height,n);
    cout<<"Rain Water Trapped = "<<trap(height);
}