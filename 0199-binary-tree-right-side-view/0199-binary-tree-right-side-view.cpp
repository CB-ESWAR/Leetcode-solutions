/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution{
    public:
    vector<int> rightSideView(TreeNode* root){
      vector<int>result;
      if(!root)return result;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* node=q.front();
            q.pop();
            if(i==size-1)result.push_back(node->val);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
      }
      return result;
    }
};