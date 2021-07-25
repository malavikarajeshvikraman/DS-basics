class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
         map <int,int>  ma ;
         
         for (int i =0;i<n;i++)
         {
             
             ma[a[i]]=1;
         }
         
         for(int j=0;j<m;j++)
         { if(ma.find(b[j])!=ma.end())
         {
             if(ma[b[j]]!=0)
                ma[b[j]]--;
         }
         }
         int c=0;
         for(auto x : ma)
         {
             if (x.second==0)
            {  c++;
            }
         }
         return c;
    }
};