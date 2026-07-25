#include <stdio.h>
int main(){
    float num,max,min;
    char ch='\0';
    int c=0;
    printf("Enter the numbers :\n");
    while(ch!='\n'){
        c++;
        scanf("%f%c",&num,&ch);
        if(c==1){
            max=num;
            min=num;
        }
        else{
            if(num>max) max=num;
            if(num<min) min=num;
        }
    }
    printf("Maximum : %f\n",max);
    printf("Minimum : %f",min);
    return 0;
}