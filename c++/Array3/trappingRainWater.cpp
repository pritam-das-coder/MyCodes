// Leetcode 42
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &v,int size)
{
    cout<<"Enter elements of vector : "<<endl;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> prevGreatest(vector<int> v){
    int n=v.size();
    vector<int> arr(n);
    arr[0]=-1;
    for(int i=1;i<n;i++){
        arr[i]=max(arr[i-1],v[i-1]);
    }
    return arr;
}
vector<int> nextGreatest(vector<int> v){
    int n=v.size();
    vector<int> brr(n);
    brr[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        brr[i]=max(brr[i+1],v[i+1]);
    }
    return brr;
}
int trapUsingFunction(vector<int>& height){
    int waterContent=0,n=height.size();
    vector<int> arr,brr;
    arr=prevGreatest(height);
    brr=nextGreatest(height);
    for(int i=1;i<=n-2;i++){
        int x=min(arr[i],brr[i]);
        if(x>height[i]) waterContent+=(x-height[i]);
    }
    return waterContent;
}
int trapNotUsingFunction(vector<int>& height) {
    int waterContent=0,n=height.size();
    // prev greatest element array
    int arr[n];
    arr[0]=-1;
    for(int i=1;i<n;i++){
        arr[i]=max(arr[i-1],height[i-1]);
    }
    // next greatest element array
    int brr[n];
    brr[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        brr[i]=max(brr[i+1],height[i+1]);
    }
    // calculating trapped water
    for(int i=1;i<=n-2;i++){
        int x=min(arr[i],brr[i]);
        if(x>height[i]) waterContent+=(x-height[i]);
    }
    return waterContent;
}
int trapMostOptimised(vector<int>& height) {
    int waterContent=0,n=height.size();
    // prev greatest element array
    int prev[n];
    prev[0]=-1;
    for(int i=1;i<n;i++){
        prev[i]=max(prev[i-1],height[i-1]);
    }
    // next greatest element array -> prev
    // minimum element of next & prev array -> prev
    prev[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        int x=max(prev[i+1],height[i+1]);
        prev[i]=min(x,prev[i]);
    }
    // calculating trapped water
    for(int i=1;i<=n-2;i++){
        if(prev[i]>height[i]) waterContent+=(prev[i]-height[i]);
    }
    return waterContent;
}
int main(){
    vector<int> height;
    input(height,6);
    cout<<trap(height);
}