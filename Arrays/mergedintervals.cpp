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