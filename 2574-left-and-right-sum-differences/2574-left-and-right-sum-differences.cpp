class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        if(n==1)return {0};
        for(int i=0;i<n;i++){
            int rightsum=0;
            int leftsum=0;
            for(int k=i-1;k>=0;k--){
                leftsum+=nums[k];
            }
            for(int k=i+1;k<n;k++){
                rightsum+=nums[k];
            }
            ans.push_back(abs(leftsum-rightsum));
        }
        return ans;
    }
};