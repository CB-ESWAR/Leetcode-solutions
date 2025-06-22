class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> hi(2);
        hi[0]=-1;
        hi[1]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){hi[0]=i;break;}
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){hi[1]=i;break;}
        }
        return hi;
    }
};