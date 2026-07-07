class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        string s=to_string(n);
        string hi="";
        for(char c:s){
            if(c!='0')hi.push_back(c);
        }
        long long  sum=0;
        for(char c:hi){
            sum+=c-'0';
        }
        return stoi(hi)*sum;
    }
};