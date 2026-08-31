class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int x:nums)freq[x]++;
        for(int i=1;i<=100;i++){
            int hi=i*k;
            if(!freq[hi]){
                return hi;
            }
        }
        return nums.size()+1;
    }
};