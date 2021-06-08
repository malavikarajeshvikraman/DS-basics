// Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

// Time limit exceed
class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        map <int,int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])==m.end())
             m[arr[i]]=1;
             else
             m[arr[i]]++;
        }
        int j=0;
        for(int i =0; i<n;i++)
        {   j++;
            if(m[arr[i]]>1)
            {
                return j;
            }
        }
        return -1;
    }
};


//Optimal solution
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        const int N =1e6+2;
        int id[N];
        for(int i=0;i<N;i++)
        {
            id[i]=-1;
        }
        int minidx =INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(id[arr[i]]==-1)
            {
                id[arr[i]]=i;
            }
            else
            {
                minidx =min(id[arr[i]],minidx);
            }
        }
        
        if(minidx==INT_MAX)
        return -1;
        else
        return minidx+1;
        
    }
      
};
