class Solution{
    public:
    // You need to complete this function
int steps=0;
    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        
        if(n<=0)
                 return 0;
        toh(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        steps++;
        toh(n-1,aux,to,from);
        return steps;
    }

};
