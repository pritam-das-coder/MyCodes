#include <stdio.h>
int binSearch(int a[], int n, int x){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main(){
    int n=7;
    int a[]={12,31,45,112,231,531,642};
    int x=531;
    printf("%d",binSearch(a,n,x));
}