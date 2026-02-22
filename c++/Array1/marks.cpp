// Given an array of marks of students, if the marks of any student is less than 35 print its roll
// number. [roll number here refers to the index of the array.]
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;
    int marks[n];
    // int marks[10]={44,37,13,67,35,90,31,87,76,32};
    cout<<"Enter all the marks : ";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}