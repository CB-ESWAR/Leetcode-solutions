class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        vector<TreeNode*> list;
        preorder(root, list);
        for (int i = 0; i < list.size() - 1; i++) {
            list[i]->left = nullptr;
            list[i]->right = list[i + 1];
        }
        if (!list.empty()) {
            list.back()->left = nullptr;
            list.back()->right = nullptr;
        }
    }
    void preorder(TreeNode* root, vector<TreeNode*>& list) {
        if (!root) return;
        list.push_back(root);
        preorder(root->left, list);
        preorder(root->right, list);
    }
};