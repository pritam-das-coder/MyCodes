# include <stdio.h>
# define n 5
void print(int arr[]){
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[1]);
}
void NextVertex(int k, int G[][n+1], int x[]){
    do{
        x[k]=(x[k]+1)%(n+1);
        if(x[k]==0) return;
        if(G[x[k-1]][x[k]]!=0){
            int j=0;
            for(;j<=k-1;j++){
                if(x[j]==x[k]) break;
            }
            if(j==k){
                if(k<n || (k==n && G[x[n]][x[1]]!=0)) return;
            }
        }
    }while(1);
}
void Hamiltonian(int k, int G[][n+1], int x[]){
    do{
        NextVertex(k,G,x);
        if(x[k]==0) return;
        if(k==n) print(x);
        else Hamiltonian(k+1,G,x);
    }while(1);
}
int main(){
    int G[n+1][n+1]={{0,0,0,0,0,0},
                {0,0,1,1,0,1},
                {0,1,0,1,1,1},
                {0,1,1,0,1,0},
                {0,0,1,1,0,1},
                {0,1,1,0,1,0}};
    int x[n+1]={0,1,0,0,0,0};
    Hamiltonian(2,G,x);
}