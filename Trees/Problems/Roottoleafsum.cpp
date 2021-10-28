class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
     if(!root && S==0) return true;
     if(!root) return false;
     bool left = hasPathSum(root->left,S-(root->data));
     bool right =hasPathSum(root->right,S-(root->data));
     return left || right ;
     
               
}
};