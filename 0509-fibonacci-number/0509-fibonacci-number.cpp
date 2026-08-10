class Solution {
public:
    int fib(int n) {
        int a=0,b=1;
        vector<int>arr(n+1,0);
        if(n<=1)return n;
        for(int i=2;i<=n;i++){
            int c=a+b;
            arr[i]=c;
            a=b;b=c;
        }
        return arr[n];
    }
};