class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return root ;
        else 
        {
            TreeNode *temp;
            root->left=invertTree(root->left);
            root->right=invertTree(root->right);
            temp=root->left;
            root->left=root->right;
            root->right=temp;
        }
        return root;
        
    }
};