
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode *tmp1,*tmp2,*tmp3,*prev;
        tmp1=l1;
        tmp2=l2;
        if(l1==NULL)
            return l2;
        else if (l2==NULL)
            return l1;
        struct ListNode *head;
        if(l1->val>=l2->val)
        {
            tmp3=tmp2;
            tmp2=tmp2->next;
        }
        else{
            tmp3=tmp1;
            tmp1=tmp1->next;
        }
        head=tmp3;
        while(tmp1 && tmp2)
        { 
        if(tmp1->val>=tmp2->val)
        {   
            tmp3->next=tmp2;
            tmp3=tmp2;
            tmp2=tmp3->next;
        }
        else
        {
            tmp3->next=tmp1;
            tmp3=tmp1;
            tmp1=tmp3->next;
        }
         
        }
        if(tmp2==NULL)
        {   tmp3->next=tmp1;
            
            
        }
        else if (tmp1==NULL)
        {   tmp3->next=tmp2;
            
        }
        return head;
    }
};