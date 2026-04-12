// Merge Sort
#include <stdio.h>
void merge(int a[], int sa,int b[], int sb, int arr[]){
    int i=0,j=0,k=0;
    while(i<sa && j<sb){
        if(a[i]<=b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }
    while(i<sa){
        arr[k++]=a[i++];
    }
    while(j<sb){
        arr[k++]=b[j++];
    }
}
void mergeSort(int arr[],int n){
    if(n==0 || n==1) return;
    int sa=n/2, sb=n-n/2;
    int a[sa],b[sb];
    int i=0;
    while(i<sa){
        a[i]=arr[i];
        i++;
    }
    int j=0;
    while(i<n){
        b[j++]=arr[i++];
    }
    mergeSort(a,sa);
    mergeSort(b,sb);
    merge(a,sa,b,sb,arr);
}
int main(){
    int n;
    printf("Enter the input size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,n);
    printf("Final Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}