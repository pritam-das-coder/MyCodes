#include <iostream>
#include <climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of cols : ";
    cin>>c;
    cout<<"Enter elements of matrix : "<<endl;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int max_idx=-1,max_sum=INT_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(max_sum<sum){
            max_sum=sum;
            max_idx=i;
        }
    }
    cout<<max_idx;
}