# include <iostream>
using namespace std;
int binary_To_Decimal(string &bin){
    int dec=0;
    int n=bin.length();
    for(int i=n-1;i>=0;i--){
        int x=n-1-i;
        dec+=(bin[i]-'0')*(1<<x);
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
    string s;
    cout<<"Enter a binary number : ";
    cin>>s;
    cout<<"Decimal Equvalent : "<<binary_To_Decimal(s);
}