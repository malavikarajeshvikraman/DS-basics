class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int lo =0, mid =0 ,hi =n-1;
    
     while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
    }
    
};