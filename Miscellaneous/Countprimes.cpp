class Solution {
public:
    int countPrimes(int n) {
        if(n==0)
            return 0;
        long long prime[n];
        for(long long i =0;i<n;i++)
        {
            prime[i]=0;
        }
        for(long long i=2;i<n;i++)
        {
            if(prime[i]==0)
            {
                for(long long j=i*i;j<n;j+=i)
                {
                    prime[j]=1;
                }
            }
        }
        int c=0;
        for(long long i=2;i<n;i++)
        {
            if (prime[i]==0)
            {
                c++;
                cout<<i;
            }
        }
    
        return c;
    }
};