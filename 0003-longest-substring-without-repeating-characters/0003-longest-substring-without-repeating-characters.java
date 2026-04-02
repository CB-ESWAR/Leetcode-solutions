class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int max_length = 0;
        for (int i = 0; i < n; i++) {
            int count=0;
            int[] hash = new int[256]; 
            for (int j = i; j < n; j++) {
                if (hash[s.charAt(j)] == 1) break;
                hash[s.charAt(j)] = 1;
                count++;
            }
            max_length = Math.max(max_length, count);
        }
        return max_length;
    }
}