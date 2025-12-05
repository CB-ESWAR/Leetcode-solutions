class Solution {
public:
    int countPartitions(vector<int>& nums){
        int count=0;
        int n=nums.size();
        int sub1_sum=0;
        for(int i=0;i<n-1;i++){
            int diff=0;
            sub1_sum+=nums[i];
            int sub2_sum=0;
            for(int j=i+1;j<n;j++){
                sub2_sum+=nums[j];
            }
            diff=abs(sub1_sum-sub2_sum);
            if(diff %2==0)count++;
        }
        return count;
    }
};