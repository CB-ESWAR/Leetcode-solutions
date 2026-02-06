class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int start=0;
        int ans=0;
        for(int end=0;end<nums.size();end++) {
            while(nums[end]>1LL*nums[start]*k)start++;
            ans=max(ans,end-start+1);
        }
        return nums.size()-ans;
    }
};
