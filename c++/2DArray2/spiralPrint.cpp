#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows of matrix : ";
    cin>>r;
    cout<<"Enter no. of columns of matrix : ";
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Spiral Print : "<<endl;
    int t=r*c;
    int minr=0,maxr=r-1,minc=0,maxc=c-1,k=0;
    while(k<t){ // minr<=maxr && minc<=maxc
        //right
        for(int i=minc;i<=maxc && k<t;i++){
            cout<<a[minr][i]<<" ";
            k++;
        }
        minr++;
        //if(minr>maxr) break;
        //down
        for(int i=minr;i<=maxr && k<t;i++){
            cout<<a[i][maxc]<<" ";
            k++;
        }
        maxc--;
        //if(maxc<minc) break;
        //left
        for(int i=maxc;i>=minc && k<t;i--){
            cout<<a[maxr][i]<<" ";
            k++;
        }
        maxr--;
        //if(maxr<minr) break;
        //up
        for(int i=maxr;i>=minr && k<t;i--){
            cout<<a[i][minc]<<" ";
            k++;
        }
        minc++;
    }
}
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int t=m*n;
//         vector<int> v(t);
//         int k=0;
//         int minr=0,minc=0,maxr=m-1,maxc=n-1;
//         while(k<t){
//             //right
//             for(int i=minc;i<=maxc && k<t;i++){
//                 v[k]=matrix[minr][i];
//                 k++;
//             }
//             minr++;
//             //down
//             for(int i=minr;i<=maxr && k<t;i++){
//                 v[k]=matrix[i][maxc];
//                 k++;
//             }
//             maxc--;
//             //left
//             for(int i=maxc;i>=minc && k<t;i--){
//                 v[k]=matrix[maxr][i];
//                 k++;
//             }
//             maxr--;
//             //up
//             for(int i=maxr;i>=minr && k<t;i--){
//                 v[k]=matrix[i][minc];
//                 k++;
//             }
//             minc++;
//         }
//         return v;
//     }
// };