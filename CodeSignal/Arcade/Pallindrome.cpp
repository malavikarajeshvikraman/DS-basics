// Given the string, check if it is a palindrome.

bool checkPalindrome(string inputString) {
    
    for(int i=0;i<inputString.size();i++)
    {
        if(inputString[i]!=inputString[inputString.size()-i-1])
        {
            return false;
        }
        
    }
    return true;

}
