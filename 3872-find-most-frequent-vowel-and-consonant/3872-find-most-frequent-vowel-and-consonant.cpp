/*class Solution {
public:
    int maxFreqSum(string s) {
        string s1="",s2="";
        unordered_map <char,int> freq;
        for(int i=0;i<s.size();i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')s1=s[i]+s1;
        }
        for(char c:s1)freq[c]++;
        int max_vowel=0;
        int max_con=0;
        for(char c:s1){
            max_vowel=max(freq[c],max_vowel);
        }
        for(int i=0;i<s.size();i++){
          if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='i' && s[i]!='u')s2=s[i]+s2;
        }
        for(char c:s2)freq[c]++;
         for(char c:s2){
            max_con=max(freq[c],max_con);
        }
      int ans=max_vowel+max_con;
      return ans;
    }
};*/
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char,int> freq;
        int max_vowel=0,max_con=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
            freq[s[i]]++;
            max_vowel=max(freq[s[i]],max_vowel);
          }
          else{
            freq[s[i]]++;
             max_con=max(freq[s[i]],max_con);
          }
        }
        
      int ans=max_vowel+max_con;
      return ans;
    }
};


