/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
    vector <int> temp;
        if(!root)
        return 0;
    queue <TreeNode *> Q;
        Q.push(root);
    while(!Q.empty())
    {
        int n=Q.size();
        for (int i=0;i<n;i++)
        {
            TreeNode *cur = Q.front();
            Q.pop();
            if(i==0)
                temp.push_back(cur->val);
            if(cur->left!=NULL)
                Q.push(cur->left);
            if(cur->right!=NULL)
                Q.push(cur->right);
                
        }
    }
        
    return (temp[temp.size()-1]);
    }
};