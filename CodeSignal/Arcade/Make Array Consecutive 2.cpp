int makeArrayConsecutive2(vector<int> statues) {
    int max=0,min=statues[0];
    for(int i=0;i<statues.size();i++)
    {
        if(min>statues[i])
        min=statues[i];
        if(max<statues[i])
        max=statues[i];
    }
    cout<<min<<max;
    int c=0;
    for(int i=min;i<=max;i++)
    {
       if(find(statues.begin(),statues.end(),i)==statues.end())
       {
           c++;
       }
    }
    return c;

}
