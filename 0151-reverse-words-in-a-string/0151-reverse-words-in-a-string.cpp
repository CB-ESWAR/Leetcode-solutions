class Solution {
public:
    string reverseWords(string s) {
        list<string> l;
        string word = "";
        for (char c : s) {
            if (c != ' ') {
                word += c;
            } else {
                if (!word.empty()) {
                    l.push_back(word);
                    word.clear();
                }
            }
        }
        if (!word.empty())l.push_back(word);
        l.reverse();
        string ans = "";
        for (const string& w : l) {
            ans+=w + " ";
        }
        if (!ans.empty())ans.pop_back();
        return ans;
    }
};
