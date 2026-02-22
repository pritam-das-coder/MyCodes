// Find the factorial of a large number.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
void multiply(int x,vector<int>& v){ // x=5 v=123 321*5=reverse(1605)=5061
    int n=v.size();
    int carry=0;
    for(int i=0;i<n;i++){
        int p=v[i]*x+carry;
        v[i]=p%10;
        carry=p/10;
    }
    while(carry!=0){
        v.push_back(carry%10);
        carry/=10;
    }
}
void fact(int n){ // find n!
    vector<int> f;
    f.push_back(1);
    for(int i=2;i<=n;i++){
        multiply(i,f);
    }
    reverse(f.begin(),f.end());
    display(f);
}
// Driver code
int main() {
    int n;
    cin>>n;
    fact(n);
    return 0;
}
