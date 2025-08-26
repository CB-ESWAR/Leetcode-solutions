class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hi;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])hi.push_back(nums1[i]);
            }
        }
        unordered_map<int, int> freq;
        vector<int> result;
        for (int i : hi) {
            if (!freq[i]) {
                result.push_back(i);
                freq[i] = 1;
            }
        }
        return result;
    }
};