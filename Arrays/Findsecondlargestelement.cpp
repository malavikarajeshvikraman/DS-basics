class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {  int max2,max1;
       if(arr_size>=2)
       {
           if(arr[0]>arr[1])
           {
               max1=arr[0];
               max2=arr[1];
           }
           else
           {
               max1=arr[1];
               max2=arr[0];
           }
       }
       
       for(int i=2;i<arr_size;i++)
       {
           if(arr[i]>max1)
           {
               max2=max1;
               max1=arr[i];
           }
           else
           {
               if(arr[i]>max2 && arr[i]!=max1)
               {
                   max2=arr[i];
               }
               
               if(max2==max1)
               {
                   if(arr[i]<max1)
                       max2=arr[i];
               }
           }
          
       }
       if(max1==max2)
          return -1;
       return max2;
    }

};