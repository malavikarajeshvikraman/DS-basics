// Memoization Technique
class Solution {
public:
     int climbStairs(int n) {
         int cache[n+1];
         for(int i=0;i<n+1;i++)
         {
             cache[i]=0;
         }
         return count(n , cache);
    }
     int count (int n,int cache[])
   {
        if(n<0)
              return 0;
        if(n==0)
             return 1;
             
        if(cache[n]!=0)
           return cache[n];
        
        cache[n]=count(n-1,cache)+count(n-2,cache);
        return cache[n];
       
   }
   
};

// Iterative