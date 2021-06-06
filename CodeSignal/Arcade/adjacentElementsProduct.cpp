int adjacentElementsProduct(vector<int> inputArray) {
    int max=inputArray[0]*inputArray[1];
    int p;
    for(int i=1;i<inputArray.size()-1;i++)
    {
         p=inputArray[i]*inputArray[i+1];
         if(p>max)
           {
               max=p;
           }
        
    }
    return max;

}
