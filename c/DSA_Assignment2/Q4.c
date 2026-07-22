// Write a program in C to implement selection sort for a user input list (use array). 
#include <stdio.h>
void selectionSort(float arr[],int n){
    for(int i=0;i<n-1;i++){ // iterate over array positions
        int smallestPos=i; // assume current index is smallest
        for(int j=i+1;j<n;j++){ // check remaining unsorted elements
            if(arr[smallestPos]>arr[j]){ // update smallest position if found smaller
                smallestPos=j;
            }
        }
        float temp=arr[i]; // swap current element with smallest found
        arr[i]=arr[smallestPos];
        arr[smallestPos]=temp;
    }
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n); // input size of array
    float arr[n]; // declare array
    printf("Enter all the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]); // input array elements
    }
    selectionSort(arr,n); // call selection sort
    printf("Sorted Array :\n");
    for(int i=0;i<n;i++) printf("%g ",arr[i]); // print sorted array
    return 0;
}
// Enter the size of array : 10
// Enter all the elements of array : 34 -2 67 105 -34 5 12 511 86 -6
// Sorted Array :
// -34 -6 -2 5 12 34 67 86 105 511