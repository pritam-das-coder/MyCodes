#include <stdio.h>
int main(){
    float ga;
    printf("Enter the gross amount : ");
    scanf("%f",&ga);
    float d;
    if(ga>=2000)
        d=0.2*ga;
    else if(ga<2000 && ga>=1000)
        d=0.15*ga;
    else if(ga<1000 && ga>=500)
        d=0.1*ga;
    else
        d=0;
    float net=ga-d;
    printf("Net amount payable = %.2f",net);
    return 0;
}