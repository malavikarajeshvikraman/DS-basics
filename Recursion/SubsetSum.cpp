class Solution{   
public:
    bool isSubsetSum(int n, int arr[], int sum){
        
        if(n==0)
              return false;
        
        if(sum==0)
               return true;
        
        if(arr[n-1]>sum)
                     return isSubsetSum(n-1,arr,sum);
        else
                     return isSubsetSum(n-1,arr,sum-arr[n-1]) || isSubsetSum(n-1,arr,sum);
    }
};