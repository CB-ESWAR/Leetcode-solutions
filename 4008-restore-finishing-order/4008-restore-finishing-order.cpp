class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        int m=friends.size();
        vector <int> ans;
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i]==friends[j])ans.push_back(order[i]);
            }
        }
        vector <int>hi;
        for(int i:ans){
            if(!freq[i]){
                hi.push_back(i);
                freq[i]=1;
            }
        }
        return hi;
    }
};