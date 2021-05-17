class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
         for(int i = s.size()-1; i >=0;i--)
        {
            cout<<i;
            s.push_back(s[i]);
        }
       
    
        s.erase(s.begin(),s.begin()+n);
        
    }
};