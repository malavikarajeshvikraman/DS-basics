// Simplest way to do it  
class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string a ;
        a="";
        a+=arr[0][0];
        int j =0;
        int i=0;
        if(N==1)
        {
            return arr[0];
        }
        while (true)
        {  
            if(j == arr[i].size() || a[j]!=arr[i][j] )
              {   if (j==0)
                        return "-1";
                  a.erase(j,j);
                  return a; 
              }
            i++;
            if(i==N)
            {   j++;
                a+=arr[0][j];
                i=1;
            }
        }
        return "-1";
    }
};


