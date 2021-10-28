class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector <int> arr= heights;
        int n = heights.size();
        stack<int> s1,st;
        vector <int> right;
        vector<int> left;
        for ( int i =n-1;i>=0;i--)
        {
            if(s1.empty()==true)
            {
                right.push_back(n);
            }
            else if (!s1.empty() && arr[s1.top()]<arr[i])
            {
                right.push_back(s1.top());
            }
            else if (!s1.empty() && arr[s1.top()]>=arr[i])
            {
                while (!s1.empty() && arr[s1.top()]>=arr[i]) s1.pop();
                
                if(s1.empty())
                     right.push_back(n);
                else
                     right.push_back(s1.top());
            }
            
            s1.push(int(i));
        }
        

        for (int i =0;i<n;i++)
        {
            if(st.empty()==true)
            {
                left.push_back(-1);
            }
            else if (!st.empty() && arr[st.top()]<arr[i])
            {
                left.push_back(st.top());
            }
            else if (!st.empty() && arr[st.top()]>=arr[i])
            {
                while (!st.empty() && arr[st.top()]>=arr[i]) st.pop();
                
                if(st.empty())
                     left.push_back(-1);
                else
                     left.push_back(st.top());
            }
            
            st.push(i);
        }
        reverse(right.begin(),right.end());
     
        int ma = INT_MIN;
        for(int i=0;i<n;i++)
        {    
            int a = arr[i]*(right[i]-left[i]-1);
            ma=max(a,ma);
        }
        
        return ma;
    }
};