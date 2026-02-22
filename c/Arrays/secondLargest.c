// Find the second largest element in the given array.
#include <stdio.h>
int main(){
    int arr[8]={3,4,1,81,81,71,34,0};
    int l=arr[0],sl=arr[0];
    for(int i=1;i<8;i++){
        if(l<arr[i]){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && l!=arr[i]){// l>=arr[i]
            sl=arr[i];
        }
    }
    // for(int i=1;i<8;i++){
    //     if(arr[i]>l) l=arr[i];
    // }
    // for(int i=1;i<8;i++){
    //     if(arr[i]>sl && arr[i]!=l) sl=arr[i];
    // }
    printf("Largest = %d\n",l);
    printf("Second Largest = %d",sl);
    return 0;
}