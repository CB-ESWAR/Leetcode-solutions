class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
       int n = s.size();
       int hi = (k-(n%k))%k;
       for (int i=0;i<hi;i++)s.push_back(fill);
       vector<string> res;
         for (int i=0; i<s.size();i+=k)res.push_back(s.substr(i, k));
        return res;
    }
};