#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void rotate (vector<int> &nums,int k)
{
   int n =  k % nums.size();

   if (k==0)
   {
       for(int i: nums)
         cout<<i<<" ";
   }
   else 
   {   
       vector<int> temp;
       for(int i=nums.size()-n;i<nums.size();i++)
       {
           temp.push_back(nums[i]);
       }
         for(int i=0;i<nums.size()-n;i++)
       {
           temp.push_back(nums[i]);
       }
            for(int i: temp)
               cout<<i<<" ";
       
   }
}
int main()
{   
    int t ;
    cin>>t;
    while(t!=0)
    {
        int n,k;
        cin>>n>>k;
        vector <int> nums;
        for(int i=0;i<n;i++)
        {   int el;
            cin>>el;
            nums.push_back(el);
        }
        rotate(nums,k);
        nums.erase(nums.begin(),nums.end());
        t--;
        cout<<endl;
    }


    return 0;
}
