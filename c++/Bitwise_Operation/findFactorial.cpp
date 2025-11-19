//  Print factorial of first 25 natural numbers and modulo the result by 10^9+7.
# include <iostream>
# include <vector>
using namespace std;
vector<long long> factOfNaturalNo(int n){
    int MOD=1000000007;
    vector<long long> v(n+1,1);
    for(int i=2;i<n+1;i++){
        v[i]=((i % MOD)*(v[i-1] % MOD)) % MOD;
    }
    return v;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<long long> ans=factOfNaturalNo(n);
    for(int i=1;i<ans.size();i++){
        cout<<i<<"! = "<<ans[i]<<endl;
    }
}