/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        stack <int> list;
        ListNode *tmp =head;
        while(tmp!=NULL)
        {
            list.push(tmp->val);
            tmp=tmp->next;
            
        }
        
        tmp=head;
    
        while(tmp!=NULL)
        {
            int l = list.top();
            if(l!=tmp->val)
                return false;
            list.pop();
            tmp=tmp->next;
        }
        return true;
        }
      

        
    
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
    if(head==NULL || head->next ==NULL)
            return true;
        
    ListNode *slow = head , *fast =head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
     bool odd;
    if(fast)
       odd=true;
    else
       odd=false;  
    ListNode *prev=NULL,*cur=head,*tmp;
    while (cur!=slow)
    {  
        tmp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tmp;
    }
    head->next=slow;
    head= prev;
    tmp=head;
      if(odd)
    {
        slow=slow->next;
    }
    while(slow!=NULL)
    {  
        if(tmp->val!=slow->val)
              return false;
        cout<<slow->val<<" "<<tmp->val;
        tmp=tmp->next;
        slow=slow->next;
    }
      
return true;
    }
    
};