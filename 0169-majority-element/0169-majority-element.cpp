class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int ele:nums){
            int freq=0;
            for(int val:nums){
                if(ele==val)freq++;
            }
            if(freq>n/2)return ele;
        }
        return 0;
    }
};