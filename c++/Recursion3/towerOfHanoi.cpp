#include <iostream>
#include <vector>
using namespace std;
// n->no. of discs to be moved,s->source,h->helper,d->destination
void path(int n,char s,char h,char d,int &moves){
    if(n==0) return;
    path(n-1,s,d,h,moves);
    moves++;
    cout<<s<<"->"<<d<<" "<<moves<<endl;
    path(n-1,h,s,d,moves);
}
int main(){
    int a=0;
    path(4,'A','B','C',a);
}