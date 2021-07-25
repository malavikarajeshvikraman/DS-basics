class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int sum= nums1.size()+nums2.size();
     int p,q=0;
     int flag;
     if(sum %2==0)
     {
         flag=1;
         p =sum/2;
         q= sum/2 +1;
         cout<<p<<q;
     }
     else
     {   flag=0;
         p =(sum+1)/2;
         cout<<p;
     }
     int la=0;
     int ra=0;
     int c=1;
     double mid=0;
        int f=0;
     while (la < nums1.size() && ra < nums2.size())
     {  cout<<c<<endl;
         if(nums1[la]<nums2[ra])
         {
            cout<<"la"<<nums1[la]<<endl;
           
             if(flag==1)
             {
                 if(c==p)
                     mid+=nums1[la];
                 if(c==q)
                 { mid+=nums1[la];
                   mid/=2;
                  f=1;
                   break;
                 }
             }
             else
             {
                 if(c==p)
                 { mid+=nums1[la];
                  f=1;
                     break;
                 }
             }
             la++;
               c++;
                 
         }
         else
         {    cout<<"ra"<<nums2[ra]<<endl;
             if(flag==1)
             {
                 if(c==p)
                     mid+=nums2[ra];
                 if(c==q)
                 { mid+=nums2[ra];
                   mid/=2;
                  cout<<mid;
                  f=1;
                   break;
                 }
             }
           else
                 { cout<<"gotin"<<p<<c;
                     if(c==p)
                     { mid+=nums2[ra];
                       cout<<mid;
                      f=1;
                         break;
                       
                     }
                 }
             ra++;
             c++;
             
         }
         
     }
        cout<<mid<<"mid"<<endl;
        if(!f)
        {
            while(la<nums1.size())
            {cout<<"la"<<nums1[la]<<endl;
                if(flag==1)
             {
                 if(c==p)
                     mid+=nums1[la];
                 if(c==q)
                 { mid+=nums1[la];
                   mid/=2;
                   break;
                 }
             }
             else
             {
                 if(c==p)
                 { mid+=nums1[la];
                     break;
                 }
             }
             la++;
       
               c++;
            }
            while(ra<nums2.size())
            {
                cout<<"ra"<<nums2[ra]<<endl;
             if(flag==1)
             {
                 if(c==p)
                     mid+=nums2[ra];
                 if(c==q)
                 { mid+=nums2[ra];
                   cout<<mid<<endl;
                   mid=mid/2;
                  cout<<mid;
                   break;
                 }
             }
           else
                 { cout<<"gotin"<<p<<c;
                     if(c==p)
                     { mid+=nums2[ra];
                       cout<<mid;
                         break;
                       
                     }
                 }
             ra++;
             c++;
                
            }
            
        }
        
        return mid;
    }
};