class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n)
    {  vector <int> result ;
       for(int i =n-1;i>=0;i--)
      { int c=1; 
       for(int j=i-1;j>=0;j--)
       {
            if(price[i]>=price[j])
                c++;
            else
                 break;
       }
       result.push_back(c);
      }
      reverse(result.begin(),result.end());
      return result;
    }
};