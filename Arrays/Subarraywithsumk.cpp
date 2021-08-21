class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	unordered_map <int,int> h;
    	int curr_sum=0;
    	int c=0;
    	for (int i=0;i<n;i++)
    	{
    	    curr_sum+=arr[i];
    	    if(curr_sum==sum)
    	          c++;
    	    if(h.find(curr_sum-sum)!=h.end())
    	          c++;
    	    else
    	        h[curr_sum]=i;
    	}
    	return c;
    }
};