#include <stdio.h>
#include <stdbool.h>
int main(){
    int r1,c1,r2,c2;
    label:
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter no. of columns of 1st matrix : ");
    scanf("%d",&c1);
    printf("Enter no. of rows of 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter no. of columns of 2nd matrix : ");
    scanf("%d",&c2);
    if(c1!=r2){
        puts("INVALID INPUT!");
        goto label;
    }
    int a[r1][c1],b[r2][c2],c[r1][c2];
    puts("Enter all elemets of 1st matrix : ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    puts("Enter all elemets of 2nd matrix : ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    puts("Resultant Matrix : ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}