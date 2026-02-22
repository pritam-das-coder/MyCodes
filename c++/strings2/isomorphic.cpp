class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s==t) return true;
        vector<int> count(256,256);
        bool f=true;
        for(int i=0;i<s.length();i++){
            int x=s[i]-t[i];
            if(count[s[i]]==256) count[s[i]]=x;
            else if(count[s[i]]!=x){
                f=false;
                break;
            } 
        }
        for(int i=0;i<256;i++) count[i]=256;
        for(int i=0;i<t.length();i++){
            int x=t[i]-s[i];
            if(count[t[i]]==256) count[t[i]]=x;
            else if(count[t[i]]!=x){
                f=false;
                break;
            } 
        }
        return f;
    }
};