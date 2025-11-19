// If cost price and selling price of an item is 
// input through the keyboard, write a program to 
// determine whether the seller has made profit or 
// incurred loss. Also determine how much profit he 
// made or loss he incurred.
#include <stdio.h>
int main(){
    float cp,sp,lg;
    printf("Enter cost price & selling price respectively : ");
    scanf("%f %f",&cp,&sp);
    if(cp>sp){
        lg=cp-sp;
        printf("Loss of Rs. %f occured",lg);
    }
    else if(sp>cp){
        lg=sp-cp;
        printf("Profit of Rs. %f occured",lg);
    }
    else{
        printf("No profit no loss");
    }
    return 0;
}