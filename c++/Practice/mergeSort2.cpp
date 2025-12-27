#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int>& v){
    int n=v.size();
    vector<int> a(n/2);
    vector<int> b(n-n/2);
    int i=0,j=0;
    while(i<n/2){
        a[i]=v[i];
        i++;
    }
    while(i<n){
        b[j]=v[i];
        i++;
    }
    
}
int main(){

}