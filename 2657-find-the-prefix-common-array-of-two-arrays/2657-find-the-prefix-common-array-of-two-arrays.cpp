class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
          unordered_map<int,int>freq;
          int count=0;
          for(int j=0;j<=i;j++){
            freq[A[j]]++;
            freq[B[j]]++;
          }
          for(auto x:freq){
            if(x.second>=2)count++;
          }
          ans.push_back(count);
        }
        return ans;
    }
    
};