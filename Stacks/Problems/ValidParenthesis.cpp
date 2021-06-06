// my solution
class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        for(char a : s)
        {
           if (a=='(')
               st.push(')');
            else if ( a=='[')
                st.push(']');
            else if (a=='{')
                st.push('}');
            else if (st.empty() || st.top()!= a)
                return false;
            else 
                st.pop();
            
        }
            return st.empty();

    }
};

// preferred solution

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            if(s[i]=='}'){
                if(st.empty())
                    return false;
                if(st.top()!='{')
                    return false;
                st.pop();
                
            }
            if(s[i]==')'){
                if(st.empty())
                    return false;
                if(st.top()!='(')
                    return false;
                st.pop();
                
            }
            if(s[i]==']'){
                if(st.empty())
                    return false;
                if(st.top()!='[')
                    return false;
                st.pop();
                
            }
        }
        return st.empty();
    }
};