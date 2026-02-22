#include <iostream>
#include <vector>
using namespace std;
void middle(int arr[][100],int size){
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==size/2 || j==size/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int size;
    cout<<"Enter size of matrix : ";
    cin>>size;
    //cout<<"Enter elements of matrix : "<<endl;
    int arr[size][100];
    middle(arr,size);
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         if(i==r/2 || j==c/2){
    //             cout<<arr[i][j]<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
}
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4 
// 1 2 37 8 0