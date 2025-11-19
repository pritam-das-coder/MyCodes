#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main(){
    int arr[5]={19,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    // vector<int> isVisited(5);
    // int value=0;
    // for(int i=0;i<n;i++){
    //     int min=INT_MAX;
    //     int minidx=-1;
    //     for(int j=0;j<n;j++){
    //         if(isVisited[j]!=1 && min>arr[j]){
    //             min=arr[j];
    //             minidx=j;
    //         }
    //     }
    //     arr[minidx]=value;
    //     value++;
    //     isVisited[minidx]=1;
    // }
    int value=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]>0 && min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        arr[minidx]=-value;
        value++;
    }
    for(int i=0;i<n;i++) arr[i]=-arr[i];
    for(int x:arr){
        cout<<x<<" ";
    }
}