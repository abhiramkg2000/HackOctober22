class Solution {
public:
    int maxi = INT_MIN;
    int solve(TreeNode* root) {
        if(!root)return 0;
        int lsubtreesum = max(0, solve(root->left));
        int rightsubtreesum = max(0, solve(root->right));
        maxi = max(maxi, lsubtreesum + rightsubtreesum + root->val);
        return max(lsubtreesum, rightsubtreesum) + root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        solve(root);
        return maxi;
    }
};
