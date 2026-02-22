#include <iostream>
using namespace std;
void pascalTriangle(int n){
    for(int i=0;i<n;i++){
        for(int k=1;k<=(n-i);k++){
            cout<<" ";
        }
        int x=1;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x=((i-j)*x)/(j+1);
        }
        cout<<endl;
    }
}
int main(){
    pascalTriangle(5);
}