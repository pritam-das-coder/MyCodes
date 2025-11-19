#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string minSum(vector<int> &arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    string n1="",n2="";
    for(int i=0;i<n;i++){
        if(i%2==0) n1=n1+to_string(arr[i]);
        else n2=n2+to_string(arr[i]);
    }
    if(n1.length()>n2.length()) n2="0"+n2;
    int sum=0,carry=0;
    string res="";
    for(int i=n1.length()-1;i>=0;i--){
        int x1=n1[i]-'0';
        int x2=n2[i]-'0';
        int add=x1+x2+carry;
        sum=add%10;
        carry=add/10;
        res=to_string(sum)+res;
    }
    if(carry!=0) res=to_string(carry)+res;
    int i=0;
    while(res[i]=='0'){
        i++;
    }
    res=res.substr(i);
    return res;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of arr : ";
    cin>>n;
    cout<<"Enter elements of arr : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<minSum(v);
}