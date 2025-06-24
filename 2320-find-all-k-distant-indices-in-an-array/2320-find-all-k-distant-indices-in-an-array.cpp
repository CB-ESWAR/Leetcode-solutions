class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        //eswar
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                for (int j = max(0, i - k); j <= min(n - 1, i + k); j++) {
                    arr.push_back(j);
                }
            }
        }
        unordered_map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        vector<int> hi;
        for (int i = 0; i < arr.size(); i++) {
            if (freq[arr[i]]) {
                hi.push_back(arr[i]);
                freq[arr[i]] = 0;
            }
        }
        return hi;
    }
};