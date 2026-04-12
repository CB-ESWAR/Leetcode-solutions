class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
         unordered_map<int,int>freq;
         for(int i=0;i<n;i++)freq[nums[i]]++;
         for(int i=0;i<=n;i++){
            if(freq[i]==0)ans=i;
         }
         return ans;
    }
};