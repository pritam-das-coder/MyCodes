#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7]={2,5,9,7,1,0,5};
    int x=7;
    //bool flag=false;
    int index=-1;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            //flag=true;
            index=i;
            //printf("%d is found at index %d\n",x,i);
            break;
        }
    }
    if(index==-1)
        printf("%d not found",x);
    else{
        printf("%d is found at index %d",x,index);
    }
    return 0;
}