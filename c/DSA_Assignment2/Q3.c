// Write a program in C to check if an array is already sorted. 
// Print if this is ascending or descending sorted array.
#include <stdio.h>
void check(int arr[],int n){
    int x=0,y=0; // counters to track ascending and descending order
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]) x++; // count ascending pairs
        if(arr[i]>=arr[i+1]) y++; // count descending pairs
    }
    if(x==n-1) printf("Array is in ascending order"); // all pairs ascending
    else if(y==n-1) printf("Array is in descending order"); // all pairs descending
    else printf("Array not sorted"); // otherwise unsorted
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n); // input size of array
    int arr[n]; // declare array
    printf("Enter all the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // input elements
    }
    check(arr,n); // function call to check order
    return 0;
}
// Output 1:
// Enter the size of array : 6
// Enter all the elements of array : 1 3 5 6 8 9
// Array is in ascending order
// Output 2:
// Enter the size of array : 5
// Enter all the elements of array : 2 1 8 4 -2
// Array not sorted