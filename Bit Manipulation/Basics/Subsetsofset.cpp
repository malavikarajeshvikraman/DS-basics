// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int main() {
    // Write C++ code here
    int arr[4]={1,2,3,4};
    cout<<(1<<4)<<endl;
    for(int i=0;i<(1<<4);i++)
    {
        for(int j=0;j<4;j++)
        {  
            if(i&1<<j)
            {
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}