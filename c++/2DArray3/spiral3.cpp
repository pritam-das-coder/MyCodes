class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> res;
        int tne=rows*cols,k=0;
        int dir[4]={1,1,2,2};
        vector<int> a(2);
        a[0]=rStart;
        a[1]=cStart;
        res.push_back(a);
        k++;
        while(k<tne){
            // right
            for(int i=1;i<=dir[0];i++){
                a[1]+=1;
                res.push_back(a);
                k++;
            }
            dir[0]+=2;
            if(k==tne) break;
            // down
            for(int i=1;i<=dir[1];i++){
                a[0]+=1;
                res.push_back(a);
                k++;
            }
            dir[1]+=2;
            if(k==tne) break;
            // left
            for(int i=1;i<=dir[2];i++){
                a[1]-=1;
                res.push_back(a);
                k++;
            }
            dir[2]+=2;
            if(k==tne) break;
            // up
            for(int i=1;i<=dir[3];i++){
                a[0]-=1;
                res.push_back(a);
                k++;
            }
            dir[3]+=2;
        }
        return res;
    }
};