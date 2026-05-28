#include <stdio.h>
#define SIZE 20

int a[SIZE], b[SIZE];

void Merge(int low, int mid, int high){ // a[low:mid]+a[mid+1,high]->b[low:high]
    int i=low, j=mid+1, k=low;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high){
        b[k++]=a[j++];
    }
    for(int m=low;m<=high;m++){ // copy ele from b to a
        a[m]=b[m];
    }
}
void MergeSort(int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(low,mid);
        MergeSort(mid+1,high);
        Merge(low,mid,high);
    }
}
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter all elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    MergeSort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}