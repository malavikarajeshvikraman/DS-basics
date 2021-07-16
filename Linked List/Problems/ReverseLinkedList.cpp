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
    ListNode* reverseList(ListNode* head) {
        struct ListNode *prev,*cur,*tmp,*h;
        prev=NULL;
        cur=head;
        while(cur!=NULL)
        {  tmp=cur->next;
           cur->next=prev;
           prev=cur;
           cur=tmp;
        }
        head=prev;
        return head;
    }
};


//User function Template for C

struct Node* reverseList(struct Node *head)
    {
        struct Node *prev, *cur,*tmp;
        tmp=NULL;
        prev=NULL;
        cur=head;
        while(cur!=NULL)
        {
            tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
            
        }
        head=prev;
        return head;
        
        
    }
