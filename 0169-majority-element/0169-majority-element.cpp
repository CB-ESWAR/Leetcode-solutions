class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])sum++;
            }
           if(sum>n/2)return nums[i];
        }
        return 0;
    }
};