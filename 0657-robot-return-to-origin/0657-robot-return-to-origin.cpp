class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0,down=0,right=0,left=0;
        int n=moves.length();
        for(int i=0;i<n;i++){
            if(moves[i]=='U')up++;
            else if(moves[i]=='D')down++;
            else if(moves[i]=='R')right++;
            else if(moves[i]=='L')left++;
        }
        if(up!=down || left!=right)return false;
        return true;
    }
};