class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string hi="123456789";
        string l=to_string(low);
        string h=to_string(high);
        for(int i=l.size();i<=h.size();i++){
            for(int j=0;j<=9-i;j++){
                string n=hi.substr(j,i);
                int num=stoi(n);
                if(num>=low && num<=high)ans.push_back(num);
            }
        }
        return ans;
    }
};