class Solution {
public:
    int totalWaviness(int num1, int num2) {
        string verify1=to_string(num1);
        string verify2=to_string(num2);
        if(verify1.length()<3 && verify2.length()<3)return 0;
        int ans=0;
        for(int i=num1;i<=num2;i++){
            string s=to_string(i);
            for(int k=1;k<s.length()-1;k++){
              if(s[k]>s[k-1] && s[k]>s[k+1])ans++;
              if(s[k]<s[k-1] && s[k]<s[k+1])ans++;
            }
        }
        return ans;
    }
};