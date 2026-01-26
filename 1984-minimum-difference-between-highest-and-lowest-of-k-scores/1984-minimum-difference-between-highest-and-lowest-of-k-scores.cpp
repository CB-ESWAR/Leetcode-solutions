class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
      if(k==1)return 0;
        for(int i=0;i+k-1<nums.size();i++){
            mini=min(nums[i+k-1]-nums[i],mini);
        }
        return mini;
    }
};