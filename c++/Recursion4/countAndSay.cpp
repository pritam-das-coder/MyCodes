class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        string rle="";
        s=s+" ";
        int l=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                rle+=to_string(l)+s[i];
                l=1;
            }
            else{
                l++;
            }
        }
        return rle;
    }
};