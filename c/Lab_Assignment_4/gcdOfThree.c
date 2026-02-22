#include <stdio.h>
int min(int x,int y,int z){ // to find minimum of 3 no.s
    if(x<y){
        if(x<z)
        return x;
        else
        return z;
    }
    else{
        if(y<z)
        return y;
        else
        return z;
    }
}
int main(){
    int a,b,c;
    printf("Enter three numbers respectively : ");
    scanf("%d %d %d",&a,&b,&c);
    int x=a,y=b,z=c;
    int gcd=1;
    for(int i=2;min(x,y,z)>=i;){
        if(x%i==0 && y%i==0 && z%i==0){
            x=x/i;
            y=y/i;
            z=z/i;
            gcd*=i;
        }
        else{
            i++;
        }
    }
    printf("GCD of %d, %d and %d is %d",a,b,c,gcd);
    return 0;
}