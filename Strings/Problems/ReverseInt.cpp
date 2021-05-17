#include<string>

class Solution {
public:
    int reverse(int x) {
        int g;
        string s = to_string(x);
        string n ="";
        if(s[0]=='-')
        {   g=1;
            n+="-";
        }
        else
            g=0;
        
        for (int i =s.size()-1;i>=g;i--)
        {
            n+=s[i];
        }
        cout<<n;
        int h;
        if(stol(n)>=pow(-2,31)&&stol(n)<=pow(2,31)-1)
            h=stol(n);
        else
            h=0;
        return h;
        
    }
};