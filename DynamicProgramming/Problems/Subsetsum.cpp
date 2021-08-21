class Solution{   
public:
    bool isSubsetSum(int n, int arr[], int sum){
        
        bool t [n+1][sum+1];
        
        for (int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(i==0 && j==0 )
               t[i][j]=true;
            else if (i==0)
            {
                t[i][j]=false;
            }
            else if (j==0)
            {
                t[i][j]=true;
            }
        }
        
        for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]>j)
               t[i][j]=t[i-1][j];
            else
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
        }
        
        return t[n][sum];
    }
};