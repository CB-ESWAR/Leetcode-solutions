class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            string t="";
            for(char c:s){
                char nextChar = (c == 'z') ? 'a' : (c + 1);
                 t += nextChar;
            }
         s+=t;
        }
        return s[k-1];
    }
};