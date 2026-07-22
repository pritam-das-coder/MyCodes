// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of 
// each digit of the number is equal to the number itself, then the number is called an Armstrong 
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )  
#include <stdio.h>
#include <math.h>
int main(){
    // for(int i=1;i<=500;i++){
    //     int calc=0;
    //     for(int j=i;j>0;j/=10){
    //         int d=j%10;
    //         calc+=d*d*d;
    //     }
    //     if(calc==i)
    //         printf("%d ",i);
    // }
    for(int i=1;i<=500;i++){
        int calc=0,c=0;
        for(int j=i;j>0;j/=10)
            c++;
        for(int k=i;k>0;k/=10){
            int d=k%10;
            calc+=(int)pow(d,c);
        }
        if(calc==i){
            printf("%d ",i);
            //printf("%d\n",c);
        }
    }
    return 0;
}