class Solution {
public:
    int m = 0;
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return m;
    }
    int dfs(TreeNode* root){
        if(root == 0)
        return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);
        m += abs(left) + abs(right);
        return root->val+left+right-1 ; 
    }
};