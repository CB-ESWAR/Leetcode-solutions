class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map <int,int> freq;
        //ESWAR
        int n=nums.size();
        for(int i=0;i<n;i++)freq[nums[i]]++;
        vector <int> hi;
        int count=0;
        for(int i:nums){
            if(i<0)count++;
            if(freq[i] && i>=0){
                freq[i]=0;
                hi.push_back(i);
            }
        }
        if(count==n){
           sort(nums.begin(),nums.end());
           return nums[n-1];
        }
        int sum=0;
        for(int i:hi)sum+=i;
        return sum;
    }
};