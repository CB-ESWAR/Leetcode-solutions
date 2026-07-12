class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> hi(arr.begin(),arr.end());
        map<int,int>ranks;
        int rank=1;
        for(int num:hi){
            if(ranks.find(num)==ranks.end()){
                ranks[num]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=ranks[arr[i]];
        }
        return arr;
    }
};