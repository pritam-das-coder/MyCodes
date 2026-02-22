// If an array arr contains n elements, then check if the given array is a palindrome or not.
#include <stdio.h>
int isPal(int arr[],int n){
    int i=0,j=n-1,c=1;// pal
    while(i<j){
        if(arr[i]!=arr[j]){
            c=0;
            break;
        }
        i++;
        j--;
    }
    return c;
}
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f=isPal(arr,n);
    if(f==1)
        printf("Palindrome Array");
    else
        printf("Not palindrome Array");
    return 0;
}