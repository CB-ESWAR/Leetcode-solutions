class Solution {
public:
    int maxDepth(string s) {
        //ESWAR
        int maxi=0;
        int left=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')left++;
            else if(s[i]==')')left--;
            maxi=max(maxi,left);
        }
        return maxi;
    }
};