// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        if(n==1)
           return 1;
        sum-=a[0];
        int cursum=0;
        for(int i=1;i<n;i++)
        {
            cursum+=a[i-1];
            sum-=a[i];
            if(cursum==sum)
                return i+1;
        }
        
        return -1;
    }

};