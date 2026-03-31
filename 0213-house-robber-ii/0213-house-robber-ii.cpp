class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];  // ✅ fixed

        int prev1 = 0, prev2 = 0;
        int prev3 = 0, prev4 = 0;

        for(int i = 0; i < n-1; i++){
            int hi = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = hi;
        }

        for(int i = 1; i < n; i++){
            int hi = max(prev3, prev4 + nums[i]);
            prev4 = prev3;
            prev3 = hi;
        }

        return max(prev1, prev3);
    }
};