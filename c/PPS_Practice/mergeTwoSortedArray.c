#include <stdio.h>
void merge(int a[],int l1,int b[],int l2,int res[]){
    int i=0,j=0,idx=0;
    while(i<l1 && j<l2){
        if(a[i]<=b[j]){
            res[idx]=a[i];
            idx++,i++;
        }
        else{
            res[idx]=b[j];
            idx++,j++;
        }
    }
    while(i<l1){
        res[idx]=a[i];
        idx++,i++;
    }
    while(j<l2){
        res[idx]=b[j];
        idx++,j++;
    }
}
int main(){
    int s1,s2,s;
    printf("Enter the size of first array : ");
    scanf("%d",&s1);
    printf("Enter the size of second array : ");
    scanf("%d",&s2);
    s=s1+s2;
    int a[s1],b[s2],res[s];
    printf("Enter elements of first array : ");
    for(int i=0;i<s1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of second array : ");
    for(int i=0;i<s2;i++){
        scanf("%d",&b[i]);
    }
    merge(a,s1,b,s2,res);
    printf("Resultant Array : ");
    for(int i=0;i<s;i++){
        printf("%d ",res[i]);
    }
    return 0;
}