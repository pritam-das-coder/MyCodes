#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPerfect(int n){
        int sr=sqrt(n);
        if(sr*sr==n) return true;
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x=0,y=c;
        while(x<=y){
            if(isPerfect(x) && isPerfect(y)) return true;
            else if(isPerfect(y)==false){
                int sr=sqrt(y);
                y=sr*sr;
                x=c-y;
            }
            else{
                int sr=sqrt(x)+1;
                x=sr*sr;
                y=c-x;
            }
        }
        return false;
    }
};