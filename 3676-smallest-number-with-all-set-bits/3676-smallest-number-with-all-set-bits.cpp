class Solution {
public:
    int smallestNumber(int n) {
        //ESWAR
        int ans=0;
        if(n==1)return 1;
        for(int i=1;i<n;i++){
            if(pow(2,i)>n){
                ans=pow(2,i)-1;
                 break;
            }
        }
        return ans;
    }
};