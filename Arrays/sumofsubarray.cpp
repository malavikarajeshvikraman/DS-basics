#include <iostream>
#include <bits/stdc++.h>
#include<vector>

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
   int sum=0;
   for(int i=0;i<n;i++)
   {   cout<<"\n Element is :"<<arr[i];
       sum=0;
       for(int j=i;j<n;j++)
       {   sum=sum+arr[j];
           cout<<"\n"<<sum;
       }
   }
   

    return 0;
}