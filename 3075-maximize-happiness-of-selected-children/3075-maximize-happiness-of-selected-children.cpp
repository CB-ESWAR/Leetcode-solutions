class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        //ESWAR
        sort(happiness.rbegin(),happiness.rend());
        long long sum=0;
        for(int i=1;i<happiness.size();i++){
            happiness[i]=happiness[i]-i;
            if(happiness[i]<0)happiness[i]=0;
        }
        for(int i=0;i<k;i++)sum+=happiness[i];
        return sum;
    }
};