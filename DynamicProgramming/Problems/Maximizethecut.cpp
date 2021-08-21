
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int t[4][n+1];
        vector <int> seg ;
        seg.push_back(x);
        seg.push_back(y);
        seg.push_back(z);
        
        for(int j=0;j<=n;j++)
              t[0][j]=0;
         for(int i=0;i<=3;i++)
           t[i][0]=0;
        
        for(int i=1;i<=3;i++)
        for(int j=1;j<=n;j++)
        {  if (seg[i-1] <= j)
             if(seg[i-1] == j)
                    t[i][j] = max(1, t[i-1][j]);

                else{
                    if(t[i][j-seg[i-1]] == 0)
                        t[i][j] = t[i-1][j];

                    else 
                       t[i][j] = max(1+t[i][j-seg[i-1]], t[i-1][j]);
                }
            else 
            {
                 t[i][j] = t[i-1][j];
            }
        }
         return t[3][n];
       }
    