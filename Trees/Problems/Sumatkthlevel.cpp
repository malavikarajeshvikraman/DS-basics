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
    int maxLevelSum(TreeNode* root) {
        
        int sum;
        int mh=0;
        int h=0;
        int m =INT_MIN;
        if(!root)
             return -1;
        queue<TreeNode *> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int n = Q.size();
            sum=0;
            h++;
            for(int i=0;i<n;i++)
            {   
                TreeNode *cur= Q.front();
                Q.pop();
                sum+=cur->val;
                cout<<sum;
                if(cur->left)
                Q.push(cur->left);
                if(cur->right)
                Q.push(cur->right);
            }
            if(sum>m)
            {
                m=sum;
                mh=h;
            }
        }
        return mh;
    }
};