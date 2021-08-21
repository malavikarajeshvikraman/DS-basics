class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map <int,int> prevsum;
        int cursum=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            cursum+=arr[i];
            
            if(cursum==sum)
               res++;
             
            
            if(prevsum.find(cursum-sum)!=prevsum.end())
            {
                res+=(prevsum[cursum-sum]);
            }
            
            prevsum[cursum]++;
             
        }
        
        return res;
    }
};