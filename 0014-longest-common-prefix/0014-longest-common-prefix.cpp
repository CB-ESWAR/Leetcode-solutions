class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string hi=strs[0];
        string bye=strs[strs.size()-1];
        int hu=min(hi.size(),bye.size());
        string s="";
        for(int i=0;i<hu;i++){
            if(hi[i]==bye[i])s+=hi[i];
            else break;
        }
        return s;
    }
};