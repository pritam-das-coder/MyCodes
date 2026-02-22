#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;// 1 7
    v1.push_back(1);
    v1.push_back(7);

    vector<int> v2;// 2 3 6 12
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(12);

    vector<int> v3;// 1 9
    v3.push_back(1);
    v3.push_back(9);

    vector<vector<int>> v; // {1,7},{2,3,6,12},{1,9}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    v.pop_back();
    cout<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    //vector<vector<int>> v(3,vector<int> (4,6));
    //vector< vector<int> > v(3);
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3); //size=6
    // cout<<v.size();
    // v[0]=v1;
    // v[1]=v2;
    // v[2]=v3;
    // cout<<v[1][0];
}