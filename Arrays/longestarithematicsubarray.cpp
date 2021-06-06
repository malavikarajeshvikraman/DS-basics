// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cout<<"No of arrays :";
   cin>>n;
   int arr[n];
   cout<<"\n Enter the elements of the array ";
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int pd,cur,y,ans;
   pd=arr[1]-arr[0];
   y=2;
   ans=2;
   for(int i=1;i<n-1;i++)
   {   
       cur=arr[i+1]-arr[i];
       if(pd==cur)
       {          y++;
               if(y>ans)
               {
                   ans=y;
               }
       }
       else{
           pd=cur;
           y=2;
       }
   }
  cout<<ans;
   

    return 0;
}