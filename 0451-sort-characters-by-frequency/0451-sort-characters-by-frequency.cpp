class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> freq;
        for(auto  &c:s)freq[c]++;
        vector <string> bucket(s.length()+1);
        for(auto &p:freq)bucket[p.second].push_back(p.first);
        string ans="";
        for(int i=s.length();i>0;i--){
            for(char c:bucket[i])ans.append(i,c);
        }
        return ans;
    }
};