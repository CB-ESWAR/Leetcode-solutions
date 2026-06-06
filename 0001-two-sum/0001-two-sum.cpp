class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int hi=target-nums[i];
            if(map.find(hi)!=mp.end())return {mp[hi],i};
            mp[nums[i]]=i;
        }
        return {};
    }
};