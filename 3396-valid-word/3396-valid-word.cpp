class Solution {
public:
    bool isValid(string word) {
        //ESWAR
        if(word.length()<3)return false;
        int vow=0;int con=0;
        string hi="aeiouAEIOU";
        for(char c:word){
            if(isalpha(c)){
                if(hi.find(c)!=string::npos)vow++;
                else con++;
            }
            else if(!isdigit(c))return false;
        }
         return vow>=1 && con>=1;
   }
};