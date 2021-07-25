vector <int> zigZagTraversal(Node* root)
{
	bool leftorright=true;
	vector<int> result;
	if(!root)
	    return result;
    queue <Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        vector <int> temp;
        for(int i =0;i<n;i++)
        {
            Node *cur = q.front();
             
                if((cur->left))
              q.push(cur->left);
             if(cur->right)
              q.push(cur->right);
              temp.push_back(cur->data);
                 q.pop();
        }
        if (leftorright)
        {
            for(int a :  temp)
             result.push_back(a);
             
        }
        else 
        {
            for(int i =n-1;i>=0;i--)
            {
                result.push_back(temp[i]);
            }
        }
        temp.erase(temp.begin(),temp.end());
        leftorright= !leftorright;
    }
    return result;
}