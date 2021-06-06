// My solution
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> temp;
        int top ;
        int idx =0;
        for (int i=1;i<=n;i++)
        {
            
              if(i==target[idx])
              {   temp.push_back("Push");
                  if(idx!=target.size()-1)
                            idx++;
                  else
                      break;
                  
              }
              else
              {    cout<<"Pop "<<i; 
                   temp.push_back("Push");
                   temp.push_back("Pop");
              }
        }
        return temp;
        
    }
};

// preferred solution

class Solution {
public:
    vector<string> buildArray(vector<int>& tar, int n) {
        vector<string> ans;
        int t = 1;
        for(int i=0;i<tar.size();++i){
            while(t<=tar[i]){
                ans.push_back("Push");
                if(t<tar[i])
                    ans.push_back("Pop");
                ++t;
            }
        }
        return ans;
    }
};