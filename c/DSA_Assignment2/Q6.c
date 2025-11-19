//  Write a program in C to implement Quick sort for a user input list (use array) 
// and choice of pivot element must be given for the user. 
#include <stdio.h>
void swap(int* a,int* b){ // function to swap two integers
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int start,int end,int choice){
    int assumedPivotIdx=choice; // pivot index chosen by user
    int c=0;
    // count elements smaller than pivot
    for(int i=start;i<=end;i++){
        if(i==assumedPivotIdx) continue;
        if(arr[i]<arr[assumedPivotIdx]) c++;
    }
    int actualPivotIdx=start+c; // actual pivot index after rearrangement
    swap(&arr[actualPivotIdx],&arr[assumedPivotIdx]); // place pivot at correct position
    int i=start,j=end;
    // partition elements around pivot
    while(i<j){
        if(arr[i]>=arr[actualPivotIdx] && arr[j]<arr[actualPivotIdx]){
            swap(&arr[i],&arr[j]);
        }
        if(arr[i]<arr[actualPivotIdx]) i++;
        if(arr[j]>=arr[actualPivotIdx]) j--;
    }
    return actualPivotIdx; // return pivot index
}
void quickSort(int arr[],int start,int end,int n){
    if(start>=end) return; // base case
    printf("Current start index : %d\n",start);
    printf("Current end index : %d\n",end);
    printf("Enter your choice of pivot index(between %d & %d both inclusive) : \n",start,end);
    int ch;
    scanf("%d",&ch); // user chooses pivot index
    int idx=partition(arr,start,end,ch); // partition array
    printf("Current Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // print array after partition
    }
    printf("\n\n");
    quickSort(arr,start,idx-1,n); // recursive call for left subarray
    quickSort(arr,idx+1,end,n); // recursive call for right subarray
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n); // input size
    int arr[n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // input elements
    }
    quickSort(arr,0,n-1,n); // call quick sort
    printf("Final Sorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // print final sorted array
    }
    return 0;
}
// Enter the size of array : 8
// Enter all elements of array : 
// 22 0 -11 467 -221 0 4 -55
// Current start index : 0
// Current end index : 7
// Enter your choice of pivot index(between 0 & 7 both inclusive) :
// 4
// Current Array : 
// -221 0 -11 467 22 0 4 -55
// Current start index : 1
// Current end index : 7
// Enter your choice of pivot index(between 1 & 7 both inclusive) :
// 5
// Current Array : 
// -221 -55 -11 0 22 467 4 0
// Current start index : 1
// Current end index : 2
// Enter your choice of pivot index(between 1 & 2 both inclusive) :
// 2
// Current Array : 
// -221 -55 -11 0 22 467 4 0
// Current start index : 4
// Current end index : 7
// Enter your choice of pivot index(between 4 & 7 both inclusive) :
// 5
// Current Array : 
// -221 -55 -11 0 22 0 4 467
// Current start index : 4
// Current end index : 6
// Enter your choice of pivot index(between 4 & 6 both inclusive) :
// 4
// Current Array : 
// -221 -55 -11 0 4 0 22 467
// Current start index : 4
// Current end index : 5
// Enter your choice of pivot index(between 4 & 5 both inclusive) :
// 5
// Current Array : 
// -221 -55 -11 0 0 4 22 467
// Final Sorted Array :
// -221 -55 -11 0 0 4 22 467
