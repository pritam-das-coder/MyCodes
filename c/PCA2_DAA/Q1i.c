#include <stdio.h>
int binSearch(int a[], int low, int high, int x){
    if(low==high){
        if(a[low]==x) return low;
        else return -1;
    }
    else{
        int mid=(low+high)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) return binSearch(a,low,mid-1,x);
        else return binSearch(a,mid+1,high,x);
    }
}
int main(){
    int n=7;
    int a[]={12,31,45,112,231,531,642};
    int x=-7;
    printf("%d",binSearch(a,0,n-1,x));
}