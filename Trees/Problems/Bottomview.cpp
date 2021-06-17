
    vector<int> bottomView(Node *root)
    {  vector <int> temp1;
        if(!root) 
        return temp1;
        queue < pair <Node *,int> > Q;
        map <int,vector <int>> m;
        Q.push({root,0});
        while(!Q.empty())
        {   
                Node *cur=Q.front().first;
                int h = Q.front().second;
                Q.pop();
                 m[h].push_back(cur->data);
               
               
                if(cur->left)
                Q.push({cur->left,h-1});
                if(cur->right)
                Q.push({cur->right,h+1});
            
            
        }
        for (auto x :m)
         temp1.push_back(x.second[x.second.size()-1]);
        return temp1;
    }