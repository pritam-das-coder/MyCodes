// GFG code -> Problem of the day
class Solution {
  public:
  bool isVowel(char ch){
      if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') return true;
      else return false;
  }
    int vowelCount(string& s) {
        // code here
        string t="";
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])) t+=s[i];
        }
        if(t.length()==0) return 0;
        sort(t.begin(),t.end());
        vector<char> vowel(5);
        vector<int> vowelCount(5);
        vowel[0]=t[0];
        vowelCount[0]=1;
        int p=0;
        for(int i=1;i<t.length();i++){
            if(t[i-1]==t[i]){
                vowelCount[p]++;
            }
            else{
                p++;
                vowel[p]=t[i];
                vowelCount[p]++;
            }
        }
        int x=1;
        for(int i=0;i<5;i++){
            if(vowelCount[i]!=0) x*=vowelCount[i];
        }
        // x*(p+1)!
        int f=1;
        for(int i=2;i<=(p+1);i++)
            f*=i;
        return (x*f);
    }
};