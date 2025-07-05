class Solution {
public:
    int findLucky(vector<int>& arr) {
        //Eswar
        int ans=-1;
        int n=arr.size();
        unordered_map <int,int> freq;
        for(int i:arr)freq[i]++;
        for (auto [num,count] : freq) {
                if (num==count)ans=max(ans,num);
        }
        return ans;
    }
};