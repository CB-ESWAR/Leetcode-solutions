class Solution {
public:
    bool checkDivisibility(int n) {
        string s=to_string(n);
        int sum=0;
        int prod=1;
        for(int i=0;i<s.length();i++){
            int n=s[i]-'0';
            sum+=n;
            prod*=n;
        }
        if (n%(sum+prod)==0)return true;
     return 0;
    }
};