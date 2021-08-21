class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        int j=n-1;
        int i=0;
        int k=i;
        int m =INT_MIN;
        while (i<n)
        {
            k=j;
            while (arr[i]>arr[k])
            {
                k--;
               
            }
            
            m = max(k-i,m);
            
            i++;
            k=j;
        }
        
        return m;
        // Your code here
        
    }
};