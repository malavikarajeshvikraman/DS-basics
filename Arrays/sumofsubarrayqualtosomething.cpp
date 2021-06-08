#include <iostream>
#include <bits/stdc++.h>
// My method

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
   int S;
   cout<<"Enter s : ";
   cin>>S;
   int sum=0;
   int st=0,en=0;
   while(en <n && sum <= S)
    sum+=arr[en++];
   if(sum==S)
    {
        cout<<st+1<<en+1;
    }
   while(st != en && sum >= S)
    sum-=arr[st++];
    cout<<st<<en;
    return 0;
}

//Another method
