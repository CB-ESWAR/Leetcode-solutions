class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        //ESWAR
        int cost=0;
        int n=colors.size();
        for (int i=1;i<n;i++) {
            if(colors[i]==colors[i-1]) {
                if (neededTime[i]<neededTime[i-1]) {
                    cost+=neededTime[i];
                    neededTime[i]=neededTime[i-1];
                } else cost+=neededTime[i-1];
            }
        }
        return cost;
    }
};