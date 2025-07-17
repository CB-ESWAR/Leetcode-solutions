class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int maxLen = 0;
        for (int val = 0; val < k; ++val) {
            unordered_map<int, int> count;
            for (int x : nums) {
                int r = x % k;
                int prev_r = (val - r + k) % k;
                int newLen = count[prev_r] + 1;
                count[r] = max(count[r], newLen);
                maxLen = max(maxLen, count[r]);
            }
        }
        return maxLen;
    }
};