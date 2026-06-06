
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        int start=max(num1,100); 
        for (int i=start;i<=num2;i++) {
            string s=to_string(i);
            int n=s.length();
            for (int k=1;k<n-1;k++) {
                if(s[k]>s[k-1] && s[k]>s[k+1])ans++;
                else if(s[k]<s[k-1]&&s[k]<s[k+1])ans++;
            }
        }
        return ans;
    }
};
