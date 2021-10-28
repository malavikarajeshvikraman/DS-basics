// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxarr ( vector <int> arr , int n)
    {
        stack <int> st1, st2;
        vector <int> left, right;
        for(int i =arr.size()-1;i>=0;i--)
        {
            if(st1.empty())
            {
                 right.push_back(n);
            }
            else if (!st1.empty() && arr[st1.top()]<arr[i])
            {
                right.push_back(st1.top());
            }
            else if (!st1.empty() && arr[st1.top()]>=arr[i])
            {
                while(!st1.empty() && arr[st1.top()]>=arr[i]) st1.pop();
                if(st1.empty())
                  right.push_back(n);
                else
                  right.push_back(st1.top());
            }
            st1.push(i);
            
        }
        reverse(right.begin(),right.end());
         for(int i =0;i<arr.size();i++)
        {
            if(st2.empty())
            {
                 left.push_back(-1);
            }
            else if (!st2.empty() && arr[st2.top()]<arr[i])
            {
                left.push_back(st2.top());
            }
            else if (!st2.empty() && arr[st2.top()]>=arr[i])
            {
                while(!st2.empty()&& arr[st2.top()]>=arr[i]) st2.pop();
                if(st2.empty())
                  left.push_back(-1);
                else
                  left.push_back(st2.top());
            }
            st2.push(i);
        }
        int m =INT_MIN;
        for(int i=0;i<n;i++)
        {
            m = max (m, arr[i]*(right[i]-left[i]-1));

        }
        return m;
        
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        vector<int> blocks;
        int mi =INT_MIN;
        blocks.assign(m,0);
        for(int i=0;i<n;i++)
       { for(int j=0;j<m;j++)
        {
            if(M[i][j]==0)
               {
                   blocks[j]=0;
               }
            else
               {
                   blocks[j]+=M[i][j];
               }
           
        }
         mi= max(mi,maxarr(blocks,blocks.size()));
       }
        
        return mi;
            
        
    }
};
