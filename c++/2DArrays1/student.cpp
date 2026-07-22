// Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include <iostream>
using namespace std;
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++){
        // if(i==0) cout<<"Enter the roll no.s : ";
        // else cout<<"Enter the marks obtained : ";
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}