class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //ESWAR
        int maxi=0;
        unordered_map <int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(int i:nums){
            maxi=max(maxi,freq[i]);
        }
        int sum=0;
        for(int i:nums){
            if(freq[i]==maxi)sum++;
        }
        return sum;
    }
};