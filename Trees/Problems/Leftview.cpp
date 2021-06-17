vector<int> leftView(Node *root)
{
    vector <int> temp;
   if(!root)
     return temp;
   queue <Node *> Q;
   Q.push(root);
   while(!Q.empty())
   {
       int n =Q.size();
       for(int i=0;i<n;i++)
       {  
           Node *cur = Q.front();

           Q.pop();
           if(i==0)
               {  temp.push_back(cur->data);
               }
               if(cur->left)
                      Q.push(cur->left);
               if(cur->right)
                      Q.push(cur->right);
               
    
       }
   }
   return temp;
   
}