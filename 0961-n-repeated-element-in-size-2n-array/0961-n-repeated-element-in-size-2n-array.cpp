class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto x:nums){
            freq[x]++;
            if(freq[x]==nums.size()/2){
                return x;
                break;
            }
        }
        return 1;
    }
};