class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans=0;
        if(abs(z-x)<abs(z-y))ans=1;
        else if(abs(z-x)>abs(z-y))ans=2;
      return ans;
    }
};