class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int m =INT_MIN;
        vector<int> result;
        for(int i=n-1;i>=0;i--)
        {
            if(m <= a[i])
           {   m=a[i];
               result.push_back(m);
           }
        }
        
       
        reverse(result.begin(),result.end());
        return result;
        
    }
};