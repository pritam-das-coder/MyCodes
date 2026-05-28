#include <stdio.h>
void swap(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[], int s, int e){
    int piv=a[s];
    int i=s, j=e;
    do{
        do{
            i++;
        }while(a[i]<piv);
        do{
            j--;
        }while(a[j]>piv);
        if(i<j) swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[s],&a[j]);
    return j;
}
void QS(int a[], int s, int e){
    if(s<e){
        int pivIdx=partition(a,s,e+1);
        QS(a,s,pivIdx-1);
        QS(a,pivIdx+1,e);
    }
}
int main(){
    int arr[]={65,70,75,80,85,60,55,50,45,999};
    int n=sizeof(arr)/sizeof(arr[0]);
    QS(arr,0,n-2);
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}