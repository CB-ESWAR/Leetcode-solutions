class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //ESWAR
        sort(nums.rbegin(),nums.rend());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j]+nums[k]) return nums[i]+nums[j]+nums[k];
                }
            }   
        }
        return 0;
    }
};