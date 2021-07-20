class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i=0;
	    int k=1;
	    int j=0;
	    int count [arr.size()] = {0};
	    while(k<=(n*m))
	    {
	        if (arr[i][j]==1)
	           {   
	               return i;
	           
	           }
	        else {
	            i++;
	        }
	        if(i==(n))
	        {
	            i=0;
	            j++;
	        }
	        k++;
	    }
	    
	    return -1;
	}

};