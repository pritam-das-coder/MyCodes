// Given an array arr[], the task is to find the minimum operations required to sort the array in 
// increasing order. In one operation, you can set each occurrence of one element to 0.
// Algorithm:
// In order to sort the array in increasing order, the condition a[i] ≤ a[i+1] must be followed at each 
// and every instance. We iterate over the array and if we found the condition to be violating i.e. a[i] > a[i+1],
//  So, in order to make a[i+1] greater, We will set all its previous non-zero elements to 0.
// The previous element which has been assigned to zero will also set all its occurrences to zero.
#include <iostream>
using namespace std;
int main(){
    int arr[]={4,1,5,3,2};
    int op=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            // Make all 0 upto arr[i]
            for(int j=0;j<=i;j++){
                if(arr[j]!=0){
                    for(int k=0;k<n;k++){
                        if(k!=j && arr[k]==arr[j]){
                            arr[k]=0;
                        }
                    }
                    arr[j]=0;
                    op++;
                }
            }
        }
    }
    cout<<op<<endl;
    for(int x:arr) cout<<x<<" ";
}
