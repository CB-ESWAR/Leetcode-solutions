class Solution {
public:
    int possibleStringCount(string word) {
        //Eswar
        int n = word.length();
        int ans = 1;
        unordered_map<int, int> freq;
        int groupId = 0;
        for (int i = 0; i < n; ) {
            int count = 1;
            while (i + count < n && word[i + count] == word[i]) count++;
            freq[groupId++] = count;
            i += count;
        }
        for (auto it : freq) {
            if (it.second > 1) ans += (it.second - 1);
        }
        return ans;
    }
};