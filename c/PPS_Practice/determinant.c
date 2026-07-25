#include <stdio.h>
#define N 4
float getDet(float mat[N][N],int n){ //n->order of determinant
    if(n==1)
        return mat[0][0];
    if(n==2)
        return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    float res=0;
    for(int col=0;col<n;col++){
        float sub[N][N];
        for(int i=1;i<n;i++){
            int subcol=0;
            for(int j=0;j<n;j++){
                if(j==col) continue;
                sub[i-1][subcol++]=mat[i][j];
            }
        }
        int sign=(col%2==0)?1:-1;
        res+=sign*mat[0][col]*getDet(sub,n-1);
    }
    return res;
}
int main(){
    float arr[N][N]={{1.7,0,2,-1},{3,0,0,5},{2.8,1,4,-3},{1,0,5,0}};
    printf("%f",getDet(arr,N));
    return 0;
}