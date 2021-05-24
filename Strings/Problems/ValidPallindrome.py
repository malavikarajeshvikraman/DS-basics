
# My solution
class Solution:
    def isPalindrome(self, s: str) -> bool:
        l=""
        for i in s:
            if i.isalpha() or i.isdigit():
                l+=i.lower()
        str1=l
        str2=str1[::-1]
        print(str1,str2)
        if(str1==str2):
            return True
        else:
            return False


# Prefered Solution :
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=''.join(e for e in s if e.isalnum())  
        s=s.lower()
        s1=s[::-1]
        return (s==s1)
