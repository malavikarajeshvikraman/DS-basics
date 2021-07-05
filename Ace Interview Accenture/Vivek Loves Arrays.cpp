// Vivek loves to play with array . One day Vivek just came up with a new array game which was introduced to him by his friend Ujjwal. The rules of the game are as follows:

// Initially, there is an array, A , containing 'N' integers.

// In each move, Vivek must divide the array into  two non-empty contiguous parts such that the sum of the elements in the left part is equal  to the sum of the elements in the right part. If Vivek can make such a move, he gets '1' point; otherwise, the game ends.

// After each successful move, Vivek have to discards either the left part or the right part and continues playing by using 
// the remaining partition as array 'A'.

// Vivek loves this game and wants your help getting the best score possible. Given 'A', can you find and print the maximum number of points he can score?


// Input Format
// First line of input contains an integer T denoting number of test cases. Each further Test case contains first line an integer 'N' , the size of array 'A'. After that 'N' space separated integers denoting the elements of array.

// Constraints
// 1 <= T <= 10 1 <= N <= 17000 0 <= A[i] <= 10^9

// Output Format
// For each test case, print Vivek's maximum possible score on a new line.

// Sample Input
// 3
// 3
// 3 3 3
// 4
// 2 2 2 2
// 7
// 4 1 0 1 1 0 1
// Sample Output
// 0
// 2
// 3

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int game (vector<int> &nums,int sum)
{
	if( sum==0 )
	      return 0;
	int st=0;
	int startsum=0;
	int endsum=0;
	int e =nums.size()-1;
	while(st!=nums.size()-1)
	{
		startsum += nums[st];
		while(e!=st)
		{
			endsum+=nums[e--];
		}
		if(endsum==startsum)
		    break;
		st++;
		e=0;
		endsum=0;
	}
	vector  <int> temp1;
	temp1=nums;
	nums.erase(nums.begin(),nums.begin()+st);
	temp1.erase(temp1.begin()+st+1,temp1.end());

	if(st!=nums.size())
	{
		return game(nums,startsum) + game(temp1,startsum)-1;
	}

	return 0;


}
int main() {
	return 0;
	int t ;
	cin>>t;
	while(t!=0)
	{
		int n;
		cin>>n;
		vector<int> nums;
		for(int i=0;i<n;i++)
		{
			int j;
			cin>>j;
			nums.push_back(j);
		}
		cout<<game(nums,1)<<endl;
		t--;
	}


}