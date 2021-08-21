class Solution{
public:

    long long gcd (long long  a,long long b)
    {
        if(a==0)
          return b;
        
        return gcd (b%a,a);
    }
    long long getSmallestDivNum(long long n){
        
        long long ans = 1;
        
        for (long long i =1;i<=n;i++)
        {
            ans=(ans*i)/(gcd(i,ans));
        }
        return ans;
    }
};