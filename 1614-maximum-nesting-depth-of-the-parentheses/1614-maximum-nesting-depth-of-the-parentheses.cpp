class Solution {
public:
    int maxDepth(string s) {
        //ESWAR
        int maxi=0;
        int left=0;
        int right=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')left++;
            else if(s[i]==')')right++;
            maxi=max(maxi,count);
            count=left-right;
        }
        return maxi;
    }
};