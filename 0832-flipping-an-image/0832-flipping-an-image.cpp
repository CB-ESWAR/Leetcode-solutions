class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<image.size();i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==1)image[i][j]=0;
                else if(image[i][j]==0)image[i][j]=1;
            }
        }
        vector<vector<int>> hi(n);
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                hi[i].push_back(image[i][j]);
            }
        }
        return hi;
    }
};