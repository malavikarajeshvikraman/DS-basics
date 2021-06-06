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
     int r=0;
   if(n==1)
   {
       cout<<1;
       return 0;
   }
    int mx=-199999;
  
   for(int i=0;i<n-1;i++)
   {   
       if(arr[i]>mx && arr[i+1]<arr[i])
       {   mx=arr[i];
           r++;
       }
   }
  cout<<r;
   

    return 0;
}