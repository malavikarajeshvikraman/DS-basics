
//Function to insert a node in a BST.
Node* insert(Node* root, int Key)
{
    if(!root)
    {
        return new Node(Key);
    }
    
    if(Key<root->data)
    {
        root->left= insert(root->left,Key);
        
    }
    else if(Key==root->data)
    {
        return root;
    }
    else
    {
          root->right= insert(root->right,Key);
    }
    return root;
}
