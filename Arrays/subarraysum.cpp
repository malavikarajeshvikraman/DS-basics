class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {   vector<int> result;
        int flag=1;
        int i;
        for( i=0;i<n;i++)
        { int sum=0;
            for(int j=i;j<n;j++)
            {
                sum +=arr[j];
                if(sum>s)
                  break;
                if(sum==s)
                {
                    result.push_back(i+1);
                    result.push_back(j+1);
                    flag=0;
                    break;
                }
                
            }
            if(flag==0)
                break;
                
        }
        if(i==n)
        {
             result.push_back(-1);
        }
        return result;
    }
};


// Better way 

/* A simple program to print subarray 
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;

/* Returns true if the there is a subarray 
of arr[] with sum equal to 'sum' otherwise 
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of 
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i;

    /* Add elements one by one to curr_sum and 
    if the curr_sum exceeds the sum,
    then remove starting element */
    for (i = 1; i <= n; i++) {
        // If curr_sum exceeds the sum,
        // then remove the starting elements
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // If curr_sum becomes equal to sum,
        // then return true
        if (curr_sum == sum) {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return 1;
        }

        // Add this element to curr_sum
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }

    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}