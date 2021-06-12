// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       int tmp[n+1];
       int *ar;
       int a[2];
       for(int i=0;i<n+1;i++)
       tmp[i]=0;
       for(int i =0;i<n;i++)
       {
           tmp[arr[i]]+=1;
       }
       for(int i=1;i<n+1;i++)
       {
           if(tmp[i]==0)
              a[1]=i;
           if(tmp[i]==2)
              a[0]=i;
              
       }
       ar=a;
       return ar;
       
    }
};