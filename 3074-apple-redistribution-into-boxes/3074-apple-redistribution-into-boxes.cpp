class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int sum1=0;
        int sum2=0;
        int count=0;
        for(const int i:apple)sum1+=i;
        for(int i=0;i<capacity.size();i++){
              if(sum2<sum1)count++;
              else break;
              sum2+=capacity[i];
        }
        return count;
    }
};