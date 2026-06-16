class Solution {
public:
    string processStr(string s) {
        string result;
        //eswar
        for (char c : s) {
            if (islower(c))result += c;
            else if (c=='*') {
                if (!result.empty())result.pop_back();
            }
            else if (c=='%')reverse(result.begin(),result.end());
            else if(c=='#')result+= result;
        }
        return result;
    }
};