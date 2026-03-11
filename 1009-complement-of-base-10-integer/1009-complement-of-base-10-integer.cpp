class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        string s="";
        while (n>0){
          s=(n%2==0 ? "0":"1")+s;
          n/=2;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')s[i]='1';
            else if(s[i]=='1')s[i]='0';
        }
        bitset <32>b(s);
        return b.to_ulong();
    }
};