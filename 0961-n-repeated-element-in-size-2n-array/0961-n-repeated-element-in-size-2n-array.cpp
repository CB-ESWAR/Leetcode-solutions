class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto x:nums)freq[x]++;
        int ans=0;
        for(int x:nums){
            if(freq[x]==nums.size()/2){
                ans=x;
                break;
            }
        }
        return ans;
    }
};