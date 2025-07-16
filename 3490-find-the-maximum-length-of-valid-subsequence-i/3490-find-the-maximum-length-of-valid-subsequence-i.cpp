class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int maxLength = 0;
        //ESWAR
        vector<vector<int>> parityPatterns = {{0, 0},{0, 1},{1, 0},{1, 1}};
        for (const auto& pattern : parityPatterns) {
            int count = 0;
            for (int num : nums) {
                if (num % 2 == pattern[count % 2]) {
                    count++;
                }
            }
            maxLength = max(maxLength, count);
        }
        return maxLength;
    }
};