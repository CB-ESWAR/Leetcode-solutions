class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        //ESWAR
        int max_length=0;
     for (int i = 0; i < n; i++) {
        int hash[256] = {0}; 
        int count=0;
        for (int j = i; j < n; j++) {
            if (hash[s[j]]) break; 
             hash[s[j]] = 1;         
             count++;                
        }
        max_length=max(count,max_length);
     }
        return max_length;
    }
};