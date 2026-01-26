class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
      if(k==1)return 0;
      else{
        for(int i=0;i+k-1<nums.size();i++){
            int diff=nums[i+k-1]-nums[i];
            mini=min(diff,mini);
        }
      }
        return mini;
    }
};