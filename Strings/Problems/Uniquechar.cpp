// Mysolution
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,vector<int>> umap;
        int i=0;
        for(char a : s)
        {   if(umap.find(a) == umap.end())
                umap.insert({a,{i++,1}});
            else
            { umap[a][1]++;
              i++;
            }
        }
        int min = s.size()+1;
        for(auto x :umap)
        {   cout<<x.second[0]<<" "<<x.second[1]<<"\n";
            if(x.second[0]<min && x.second[1]==1)
            
            {    min=x.second[0];
  
            }
        }
        if(min==s.size()+1)
            min=-1;
    return (min);
    }
};

// preferred solution

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<int,int>c;
        for(int i=0;i<s.length();i++){
            c[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(c[s[i]]==1){
                return i;
            }
        }
        return -1;
        }
  };