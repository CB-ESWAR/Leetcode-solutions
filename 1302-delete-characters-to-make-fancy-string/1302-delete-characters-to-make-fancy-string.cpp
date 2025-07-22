class Solution {
    public:
        string makeFancyString(const string& s) {
            string result;
            //Eswar
            int count = 1;
            for (size_t i = 0; i < s.length(); ++i) {
                if (i > 0 && s[i] == s[i - 1])count++;
                else count = 1;
                if (count < 3) {
                    result += s[i];
                }
            }
            return result;
        }
    };
