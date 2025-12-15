class Solution {
public:
    string removeOuterParentheses(string s) {
        int hi=0;
        string ans="";
        for(char c:s){
            if(c=='('){
                if(hi>0)ans+=c;
                hi++;
            }
            else if(c==')'){
                hi--;
                if(hi>0)ans+=c;
            }
        }
        return ans;
    }
};