#include <iostream>
using namespace std;
int maze(int cr,int cc,int er,int ec){
    int rw=0,dw=0,tw=0;
    if(cr==er && cc==ec) return 1;
    else if(cr==er) rw=maze(cr,cc+1,er,ec); // right
    else if(cc==ec) dw=maze(cr+1,cc,er,ec); // down
    else{
        rw=maze(cr,cc+1,er,ec);
        dw=maze(cr+1,cc,er,ec);
    }
    tw=rw+dw;
    return tw;
}
void mazePath(int cr,int cc,int er,int ec,string s){
    if(cr==er && cc==ec){
        cout<<s<<endl;
    }
    else if(cr==er) mazePath(cr,cc+1,er,ec,s+"R"); // right
    else if(cc==ec) mazePath(cr+1,cc,er,ec,s+"D"); // down
    else{
        mazePath(cr,cc+1,er,ec,s+"R");
        mazePath(cr+1,cc,er,ec,s+"D");
    }
}
int maze2(int r,int c){
    int rw=0,dw=0,tw=0;
    if(r==1 && c==1) return 1;
    else if(r==1) rw=maze2(r,c-1);
    else if(c==1) dw=maze2(r-1,c);
    else{
        rw=maze2(r,c-1);
        dw=maze2(r-1,c);
    }
    tw=rw+dw;
    return tw;
}
void maze2Path(int r,int c,string s){
    if(r==1 && c==1){
        cout<<s<<endl;
    }
    else if(r==1) maze2Path(r,c-1,s+"R");
    else if(c==1) maze2Path(r-1,c,s+"D");
    else{
        maze2Path(r,c-1,s+"R");
        maze2Path(r-1,c,s+"D");
    }
}
int main(){
    int r,c;
    cout<<"Enter r & c : ";
    cin>>r>>c;
    //mazePath(1,1,r,c,"");
    //cout<<maze2(r,c);
    maze2Path(r,c,"");
}