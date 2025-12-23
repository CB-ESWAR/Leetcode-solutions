class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,int> hi,bye;
       for(int i=0;i<s.length();i++){
        if(hi[s[i]]!=bye[t[i]])return 0;
        hi[s[i]]=bye[t[i]]=i+1;
       }
       return true;
    }
};