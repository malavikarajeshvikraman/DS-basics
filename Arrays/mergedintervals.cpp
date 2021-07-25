class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector <vector<int>>mergedlist;
        sort(intervals.begin(),intervals.end());
        vector <int> temp = intervals[0];
        for(auto it : intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1]=max(it[1],temp[1]);
            }
            else {
                mergedlist.push_back(temp);
                temp=it;
            }
        }
        mergedlist.push_back(temp);
        return mergedlist;
        
    }
};


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(result[j][1]>=intervals[i][0] && result[j][0]<=intervals[i][1]&& result[j][1]<=intervals[i][1])
            {
                result[j][1]=intervals[i][1];
            }
            else if (result[j][1]>=intervals[i][0] && result[j][0]<=intervals[i][1]&& result[j][1]>=intervals[i][1])
            {
                continue;
            }
            else {
                
                result.push_back(intervals[i]);
                j++;
            }
        }
        return result;
    }
};