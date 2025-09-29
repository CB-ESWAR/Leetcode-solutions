class Solution {
public:
    bool isIsomorphic(string s, string t) {
            //ESWAR
        unordered_map<char, int> m1, m2;
        for(int i=0;i<s.size();i++){
            if (m1[s[i]]!=m2[t[i]])return 0;
            m1[s[i]]=m2[t[i]]=i+1;
        }
         return 1;
    }
};