class Solution {
public:
    int reverseBits(int n) {
        string hi=bitset<32>(n).to_string();
        int start=0;
        int end=hi.length()-1;
        while(start<=end){
            swap(hi[start],hi[end]);
            start++;
            end--;
        }
        bitset<32> b(hi);
        int ans=b.to_ulong();
        return ans;
    }
};