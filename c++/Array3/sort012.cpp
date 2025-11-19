#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortColors(vector<int>& nums) {
        int noz=0,noo=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<=noz-1) nums[i]=0;
            else if(i<=noz+noo-1) nums[i]=1;
            else nums[i]=2;
        }
    }
int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(4);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-6);
    v.push_back(8);
    // v.push_back(1);
    // v.push_back(0);
    display(v);
    arrange(v);
    display(v);
}