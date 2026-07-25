// second largest
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<"Enter no. of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter all elements : ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int l,sl;
    l=sl=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>l){
                sl=l;
                l=arr[i][j];
            }
            else if(arr[i][j]>sl)
                sl=arr[i][j];
        }
    }
    cout<<l<<" "<<sl;
}
