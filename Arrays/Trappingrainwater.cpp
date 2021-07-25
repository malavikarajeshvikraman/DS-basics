class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int l=0;
        int r=n-1;
        int mr =arr[r];
        int ml = arr[l];
        int s=0;
        while(l<r)
        {
            if(arr[l]<=arr[r])
            {
                l++;
                ml=max(ml,arr[l]);
                s+=ml-arr[l];
            }
            else
            {
                r--;
                mr=max(mr,arr[r]);
                s+=mr-arr[r];
            }
        }
        
        return s;
    }
};