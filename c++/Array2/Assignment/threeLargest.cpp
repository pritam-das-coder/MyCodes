#include <iostream>
using namespace std;
int main(){
    int arr[]={3,5,1,7,12,7,12,0,71};
    int n=9;
    int l,sl,tl;
    l=sl=tl=arr[0];
    // for repeated element present
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            tl=sl;
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl){
            tl=sl;
            sl=arr[i];
        }
        else if(arr[i]>tl)
            tl=arr[i];
    }
    cout<<l<<" "<<sl<<" "<<tl;
}