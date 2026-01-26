class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        //ESWAR
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min_diff=INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            min_diff=min(min_diff,diff);
        }
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==min_diff)ans.push_back({arr[i],arr[i+1]});
        }
        return ans;
    }
};