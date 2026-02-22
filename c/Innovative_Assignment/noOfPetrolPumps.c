// Suppose there is a circular road. There are n petrol pumps on that 
// road. You are given two arrays, a[ ] and b[ ], and a positive 
// integer c. where a[i] denote the amount of fuel we get on 
// reaching ith petrol pump, b[i] denote the amount of fuel used to 
// travel from ith petrol pump to (i + 1)th petrol pump and c denotes 
// the capacity of the tank in the vehicle. The task is to calculate the 
// number of petrol pump from where the vehicle will be able to 
// complete the circle and come back to starting point. 
#include <stdio.h>
int find(int a[], int b[], int c, int n){
    int k = 0;
    for(int j = 0; j < n; j++){
        int x = 0;     
        int failed = 0;
        for(int i = 0; i < n; i++){
            int idx = (j + i) % n;
            x += a[idx];           
            if(x > c) x = c;      
            x -= b[idx];   
            if(x < 0){
                failed = 1;
                break;
            }
        }
        if(!failed) k++;
    }
    return k;
}
// int find(int a[],int b[],int c,int n){
//     int k=0;
//     for(int j=0;j<n;j++){
//         int x=0;
//         int f=0;
//         for(int i=0;i<n;i++){
//             x+=a[i]-b[i];
//             printf("%d",x);
//             if(x<0){
//                 f=1;
//                 break;
//             }
//         }
//         if(f==0) k++;
//     }
//     return k;
// }
int main(){
    int n;
    printf("Enter size of array a : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter all elements of a : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of array b : ");
    scanf("%d",&n);
    int b[n];
    printf("Enter all elements of b : ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int c;
    printf("Enter c : ");
    scanf("%d",&c);
    printf("No. of pumps : %d",find(a,b,c,n));
    return 0;
}