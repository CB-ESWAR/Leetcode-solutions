class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                breakpoint=i;
                break;
            }
        }
        if(breakpoint==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int just_larger=0;
        for(int i=n-1;i>breakpoint;i--){
            if(nums[breakpoint]<nums[i]){
                just_larger=i;
                break;
            }
        }
        
        swap(nums[breakpoint],nums[just_larger]);
        reverse(nums.begin()+breakpoint+1, nums.end());
    }
};