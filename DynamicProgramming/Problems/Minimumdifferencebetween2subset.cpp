// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
    vector<int> subsum (int arr[],int s,int n)
    {
        bool t[n+1][s+1];
        for(int i=0;i<n+1;i++)
        for(int j=0;j<s+1;j++)
        {
            if(i==0 && j==0)
              t[i][j]=true;
            else if (i == 0)
              t[i][j]=false;
            else if (j==0)
              t[i][j]=true;
        }
        
        
        for (int i=1;i<n+1;i++)
        for(int j=1;j<s+1;j++)
        {
            if(arr[i-1]>j)
            t[i][j]=t[i-1][j];
            else
            t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
        }
        vector<int> result;
        for(int j=0;j<s/2+1;j++)
        {
            if(t[n][j]==true)
               result.push_back(j);
        }
        return result;
    }
	int minDifference(int arr[], int n)  { 
	   
	   int sum=0;
	   if(n==1)
	     return arr[0];
	   for(int i=0;i<n;i++)
	   sum+=arr[i];
	   vector <int> result = subsum(arr,sum,n);
	   int m = INT_MAX;
	   for(int i=0;i<result.size();i++)
	   {  
	       m = min(sum-2*result[i],m);
	   }
	   
	   return m;
	} 
};
