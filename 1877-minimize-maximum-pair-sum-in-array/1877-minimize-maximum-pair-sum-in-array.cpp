class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int maxi=INT_MIN;
        while(start<end){
            int sum=0;
            sum=nums[start]+nums[end];
            maxi=max(sum,maxi);
            start++;end--;
        }
        return maxi;
    }
};