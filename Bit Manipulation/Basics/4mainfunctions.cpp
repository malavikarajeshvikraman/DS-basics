// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int getbit (int n,int pos)
{
    return(((1<<pos)&n!=0));
}

int setbit (int n,int pos)
{
    return ((1<<pos)|n);
}

int clearbit (int n,int pos)
{
    int mask =~(1<<pos);
    return(mask & n);
}
int updatebit(int n,int pos,int value)
{
    clearbit(n,pos);
    return(value<<pos | n);
}

int main() {
    // Write C++ code here
    cout<<"Enter number";
    int n;
    cin>>n;
    int pos;
    cout<<"Enter position where manipulation needs to be done ";
    cin>>pos;
    cout<<"Getting bit : "<<getbit(n,pos)<<endl;
    cout<<"Setting bit : "<<setbit(n,pos)<<endl;
    cout<<"Clearing bit : "<<clearbit(n,pos)<<endl;
    cout<<"Updating bit : "<<updatebit(n,pos,1)<<endl;
    
    return 0;
}