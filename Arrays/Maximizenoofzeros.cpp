class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int i =0;
        int f=0;
        int j=0;
        int co=0;
        int ma=INT_MIN;
        while(j<n)
        { if(f<=m)
        {  
            if(arr[j]==0)f++;
            j++;
        }
        if(f>m)
        {
            if(arr[i]==0) f--;
            
             i++;
        }
        ma=max(ma,abs(i-j));
        
         
        }
        
        if(ma==0)
          return 1;
        return ma;
    }  
};