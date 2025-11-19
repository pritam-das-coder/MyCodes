# include <iostream>
using namespace std;
int binToDec(string& str){
    int dec=0;
    int n=str.length();
    for(int i=n-1;i>=0;i--){
        int x=n-1-i;
        dec+=(str[i]-'0')*(1<<x);
    }
    return dec;
}
string decToBin(int n){
    string res="";
    while(n>0){
        if(n%2==0) res="0"+res;
        else res="1"+res;
        // n=n/2;
        n=n>>1;
    }
    return res;
}
int main(){
    // string s="101";
    // cout<<binToDec(s);
    cout<<decToBin(18);
}