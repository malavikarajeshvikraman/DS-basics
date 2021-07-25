#include <map>
vector<vector<int>> pairSum(vector<int> &arr, int s){
    map <int,int> trail ;
    vector<vector<int>> result;
    vector<int> temp;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {  
       sum=s-arr[i];
      
       if(trail.find(sum)!=trail.end())
       {   int count = trail[sum];
           int j=0;
           while (j<count)
           { 
           temp.push_back(sum);
           temp.push_back(arr[i]); 
           result.push_back(temp);
           temp.erase(temp.begin(),temp.end());
       j++;}}

       trail[arr[i]]++;
         
    }
    sort(result.begin(),result.end());
    if(result.empty())
        result.push_back({-1});
    return result;
}