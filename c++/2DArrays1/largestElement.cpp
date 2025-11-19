// Write a C++ program to find the largest element of a given 2D array of integers.
// Write a program to print sum of all the elements of a 2D matrix.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //int max=INT_MIN;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //if(arr[i][j]>max) max=arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}