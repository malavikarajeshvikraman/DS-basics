 vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> result;
        stack <long long > st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
                   result.push_back(-1);
            else
                { 
                    while(!st.empty())
                    { if(st.top()>arr[i])
                          {result.push_back(st.top());
                           break;
                          }
                     else
                          st.pop();
                    }
                    if(st.empty())
                         result.push_back(-1);
                }
            st.push(arr[i]);
        }
        reverse(result.begin(),result.end());
        return result;
    }