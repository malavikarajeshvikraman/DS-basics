// A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. Given an integer, , rotate the array that many steps left and return the result.

vector<int> rotateLeft(int d, vector<int> arr) {
    
   vector <int> ans;
   int size = arr.size();
   int m = d%size;
   for(int i=m;i<size;i++)
   ans.push_back(arr[i]);
   for(int i=0;i<m;i++)
    ans.push_back(arr[i]);
    
    return ans;
   
}