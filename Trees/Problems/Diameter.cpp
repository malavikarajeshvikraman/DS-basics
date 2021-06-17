 int height(struct Node* root )
    {      if(!root)
            return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        return max(lheight,rheight)+1;
    }
int diameter(struct Node* root) {
        if(!root)
            return 0;
        int lheight = height(root->left);
        int rheight =height(root->right);
        int h = lheight+rheight+1;
        
        int ldiameter=diameter( root->left);
        int rdiameter=diameter( root->right);
        
        return max(max(ldiameter,rdiameter),h);
        
    
}