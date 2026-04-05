#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    set<int> s1={3,5,2,1,7,9};
    set<int> s2={1,11,12,7,3};
    set<int> s;
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s,s.begin()));
    for(int ele:s){
        cout<<ele<<" ";
    }
    
}