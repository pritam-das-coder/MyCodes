// Finding all permutations of an string given all elements of the string are unique.
#include <iostream>
#include <vector>
using namespace std;
void print(string ans,string original,int& k){
    if(original==""){
        k++;
        cout<<ans<<" "<<k<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        print(ans+original[i],original.substr(0,i)+original.substr(i+1),k);
    }
}
int main(){
    int k=0;
    print("","abc",k);
}