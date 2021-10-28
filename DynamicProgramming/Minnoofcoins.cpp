class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int t[M+1][V+1];
	    
	    for(int i=0;i<M+1;i++)
	    {
	        for(int j=0;j<V+1;j++)
	        {
	            if(i==0)
	                t[0][j]=INT_MAX-1;
	            else if(j==0)
	                t[i][0]=0;
	            else if (i==1)
	            {
	                if(j%coins[i-1]==0)
	                {
	                    t[i][j]=j/coins[i-1];
	                }
	                else
	                    t[i][j]=INT_MAX-1;
	            }
	             
	        }
	    }
	    
	    for(int i=1;i<M+1;i++)
	    for(int j=1;j<V+1;j++)
	    {
	        if(coins[i-1]<=j)
	        {
	            t[i][j]= min (t[i][j-coins[i-1]] + 1,t[i-1][j]);;
	        } 
	        else
	            t[i][j]=t[i-1][j];
	    }
	    if(t[M][V]==INT_MAX -1)
	    return -1;
	    else
	    return t[M][V];
	} 
	  
};