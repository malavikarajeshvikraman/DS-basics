
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 =l1,*t2=l2,*p=NULL;
        int c=0;
        while(t1!=NULL && t2!=NULL)
        {  
            int h = t1->val+t2->val+c;
             c = h/10;
             h=h%10;
            t2->val=h;
            t1=t1->next;
            p=t2;
            t2=t2->next;
            
        }
        while (t1!=NULL)
        {   cout<<t1->val;
            int h = t1->val+c;
            c = h/10;
            h=h%10;
            ListNode *tmp = new ListNode(h);
            p->next=tmp;
            p=tmp;
            t1=t1->next;
            
        }
        while (t2!=NULL)
        {
            
            int h = t2->val+c;
            c = h/10;
            h=h%10;
            t2->val=h;
             p=t2;
            t2=t2->next;
            
        }
        if(c!=0)
        {
            ListNode *tmp = new ListNode(c);
            p->next=tmp;
        }
        
        return l2;
        
    }
};