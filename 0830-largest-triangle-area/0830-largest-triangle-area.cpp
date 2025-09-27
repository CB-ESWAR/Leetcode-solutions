class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double a=0.0;
        int n=points.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                for(int k=j+1;k<n;++k){
                    int x=points[i][0],y=points[i][1];
                    int u=points[j][0],v=points[j][1];
                    int m=points[k][0],n=points[k][1];
                    double s=0.5*abs(x*(v-n)+u*(n-y)+m*(y-v));
                    a=max(a,s);
                }
            }
        }

        return a;
    }
};