// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example,
// 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int sum=0;
        for(int j=i;j>0;j/=10){
            int d=j%10;
            sum+=d*d*d;
        }
        if(sum==i)
        cout<<i<<endl;
    }
}