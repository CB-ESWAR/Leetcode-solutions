class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0,prev2=0;
        for(int x:nums){
            int hi=max(prev1,prev2+x);
            prev2=prev1;
            prev1=hi;
        }
        return prev1;
    }
};