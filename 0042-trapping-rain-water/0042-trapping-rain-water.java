class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int rightmax[]=new int[n];
        int leftmax[]=new int[n];
        int left_maxi=0;
        int right_maxi=0;
        for(int i=0;i<n;i++){
           left_maxi=Math.max(left_maxi,height[i]);
           leftmax[i]=left_maxi;
        }
        for(int i=n-1;i>=0;i--){
           right_maxi=Math.max(right_maxi,height[i]);
           rightmax[i]=right_maxi;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=Math.min(leftmax[i],rightmax[i])-height[i];
        }
        return sum;
    }
}