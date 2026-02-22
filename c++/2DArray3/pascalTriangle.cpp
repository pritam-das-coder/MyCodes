#include <iostream>
#include <vector>
using namespace std;
int main(){
    int numRows;
    cout<<"Enter no. of rows : ";
    cin>>numRows;
    vector<vector<int>> v;
    for(int i=1;i<=numRows;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
// latest
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> v;
//         for(int i=0;i<numRows;i++){
//             vector<int> a(i+1);
//             v.push_back(a);
//             for(int j=0;j<=i;j++){
//                 if(j==0 || j==i) v[i][j]=1;
//                 else v[i][j]=v[i-1][j]+v[i-1][j-1];
//             }
//         }
//         return v;
//     }
// };
// old technique
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> v(numRows);
//         for(int i=0;i<numRows;i++){
//             vector<int> row(i+1);
//             int x=1;
//             for(int j=0;j<=i;j++){
//                 row[j]=x;
//                 x=((i-j)*x)/(j+1);
//             }
//             v[i]=row;
//         }
//         return v;
//     }
// };
    // vector<vector<int>> v;
    // for(int i=0;i<=rowIndex;i++){
    //     vector<int> a(i+1);
    //     v.push_back(a);
    //     for(int j=0;j<=i;j++){
    //         if(j==0 || j==i) v[i][j]=1;
    //         else v[i][j]=v[i-1][j]+v[i-1][j-1];
    //     }
    // }
    // return v[rowIndex];