class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int oldcolor=image[sr][sc];
        if(oldcolor==color)return image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;
        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();
            int dr[]={1,-1,0,0};
            int dc[]={0,0,1,-1};
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nc>=0 && nr<n && nr<m &&image[nr][nc]==oldcolor ){
                image[nr][nc]=color;
                q.push({nr,nc});
                }
            }
        }  
         return image;
    }
    
};