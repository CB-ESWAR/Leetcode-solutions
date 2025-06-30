class Solution {
public:
    int findLHS(vector<int>& nums) {
        //eswar
        unordered_map<int, int> count;
        int maxLength = 0;
        for (int num : nums) count[num]++;
        for (auto it : count) {
            int num = it.first;
            if (count.find(num + 1) != count.end()) {
                int sum = count[num] + count[num + 1];
                if (sum > maxLength) maxLength = sum;
            }
        }
        return maxLength;
    }
};
