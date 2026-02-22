#include <stdio.h>
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int arr[n][3];
    for(int i=0;i<n;i++){
        printf("Enter marks of P,C and M of student %d respectively : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Array : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}