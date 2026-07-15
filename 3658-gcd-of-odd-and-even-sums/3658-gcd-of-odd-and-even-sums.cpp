class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd_sum=0;
        int even_sum=0;
        for(int i=1;i<2*n;i+=2)odd_sum+=i;
        for(int i=2;i<=2*n;i+=2)even_sum+=i;
        int ans=1;
        for(int i=1;i<min(even_sum,odd_sum);i++){
            if(even_sum%i==0 && odd_sum%i==0)ans=i;
        }
        return ans;
    }
};