class Solution {
public:
    int countOdds(int low, int high) {
        int total_num=high-low+1;
        int ans=0;
        if(total_num % 2 ==0)ans=total_num/2;
        else{
            if(low%2!=0 || high%2!=0)ans=total_num/2+1;
            else ans=total_num/2;
        }
        return ans;
    }
};