#include <stdio.h>
void MAX_MIN(int a[],int i, int j, int* max, int* min){
    if(i==j) *max=*min=a[i]; // one element
    else if(i==j-1){ // two element
        if(a[i]<a[j]){
            *min=a[i];
            *max=a[j];
        }
        else{
            *min=a[j];
            *max=a[i];
        }
    }
    else{
        int mid=(i+j)/2;
        MAX_MIN(a,i,mid,max,min);
        int max1,min1;
        MAX_MIN(a,mid+1,j,&max1,&min1);
        if(max1>*max) *max=max1;
        if(min1<*min) *min=min1;
    }
}
int main(){
    int arr[]={4,1,110,-6,34,11,6,-4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx,mn;
    MAX_MIN(arr,0,n-1,&mx,&mn);
    printf("Maximum element : %d\n",mx);
    printf("Minimum element : %d\n",mn);
}