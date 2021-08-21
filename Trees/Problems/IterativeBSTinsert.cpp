Node* insert(Node* root, int Key)
{
    if(!root)
    {
       
       return new Node(Key);
        
    }
    
    Node *temp , *prev;
    temp =root;
    
    while (temp!=NULL)
    {
        if(temp->data>Key)
        {
            prev=temp;
            temp=temp->left;
        }
        
        else if (temp->data<Key)
        {
            prev=temp;
            temp=temp->right;
        }
        else 
        {
            return root;
        }
        
    }
    
    if(prev->data>Key)
    {
        prev->left= new Node(Key);
    }
    else
       prev->right= new Node(Key);
    
    
    return root;
    
    
    
}
