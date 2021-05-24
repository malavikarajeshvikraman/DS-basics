// My solution

class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char,int> count;
        if(s.size()!=t.size())
            return false;
        for(char a: s)
        {
            if(count.find(a)==count.end())
                count[a]=1;
            else
                count[a]++;
        }
        for(char a :t)
        {
             if(count.find(a)==count.end())
                return false;
            else
                { count[a]--;
                  if(count[a]<0)
                      return false;
                } 
        }
        for(char a : s)
        {
            if(count[a]!=0)
                return false;
        }
        return true;
        
    }
};

// Preferred Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> found;
        for( auto c : s)
        {
            found[c]++;
        }
        for(auto c : t)
        {
            if(found.find(c) == found.end())
                return false;
            found[c]--;
            if( found[c] == 0)
            {
                found.erase(c);
            }
        }
        return found.empty();
    }
};