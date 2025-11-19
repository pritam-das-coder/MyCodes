#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,0,7};
    int x=8;//target
    int n=7;
    int y=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    y++;
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                } 
            }
        }
    }
    cout<<y;
}