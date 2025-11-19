#include <iostream>
using namespace std;
int main(){
    int arr[]={13,11,10,10,6,5};
    int n=6;
    int ca=0,cd=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]) ca++;
        if(arr[i]>=arr[i+1]) cd++;
    }
    if(ca==n-1 || cd==n-1)
        cout<<"Sorted";
    else
        cout<<"Not Sorted";
}