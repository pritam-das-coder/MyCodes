#include <iostream>
#include <vector>
using namespace std;
void arrange(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    int len=original.length();
    for(int i=0;i<len;i++){
        char ch=original[i];
        arrange(ans+ch,original.substr(0,i)+original.substr(i+1));
    }
}
int main(){
    arrange("","abcd");
    return 0;
}