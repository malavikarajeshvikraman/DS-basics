 int celebrity(vector<vector<int> >& M, int n) 
    {
        vector <int> knows ={0} , known ={0};
        
        for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
         {
             if(M[i][j]==1)
             {
                 knows[i]++;
                 known[j]++;
             }
         }
         
         for(int i=0;i<n;i++)
         {
             if(knows[i]==0  && known[i]==n-1)
                return i;
         }
         return -1;
    }