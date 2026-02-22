class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        string f=strs[0],l=strs[strs.size()-1];
        int l1=f.length();
        int l2=l.length();
        for(int i=0;i<min(l1,l2);i++){
            if(f[i]==l[i]) res+=f[i];
            else break;
        }
        return res;
    }
};