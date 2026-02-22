#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int tnl=2*n-1;// tnl->total number of lines
    int nnl=0,nnm=tnl,nnr=0;// nnl-> number of numbers in left region
    int mc=n;// mc->number to be printed in middle region
    for(int i=1;i<=tnl;i++){
        int lc=n;
        for(int j=1;j<=nnl;j++){
            printf("%d",lc);
            lc--;
        }
        for(int k=1;k<=nnm;k++){
            printf("%d",mc);
        }
        int rc=mc+1;
        for(int x=1;x<=nnr;x++){
            printf("%d",rc);
            rc++;
        }
        if(i<n){
            nnl++;
            nnm-=2;
            nnr++;
            mc--;
        }
        else{
            nnl--;
            nnm+=2;
            nnr--;
            mc++;
        }
        printf("\n");
    }
    return 0;
}