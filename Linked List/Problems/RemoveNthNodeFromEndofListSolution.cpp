
// 4ms Solution

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return nullptr;
        
        ListNode* prev=head,*temp=head;
        while(n--){
            temp=temp->next;
            if(!temp) return head->next;
        }
        while(temp->next){
            prev=prev->next;
            temp=temp->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};


// My solution 10ms

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode *tmp,*tmp1;
        tmp=head;
        int c=0;
        while((tmp->next)!=NULL)
        {   
            c++;
            tmp=tmp->next;
        }
        c++;
        c=c-n;
        tmp=head;
        cout<<c;
       for(int i=0;i<c-1;i++)
       {
           tmp=tmp->next;
       }
        if(tmp!=head)
        {   if(tmp->next!=NULL)
            tmp->next=(tmp->next)->next;
            
            
        }
        else
        { 
            if(tmp->next!=NULL )
            {   if(c==0)
                    {
                        head=tmp->next;
                    }
             else
                tmp->next=(tmp->next)->next;
            }
            else
                head=NULL;
        }
       
        return head;
    }
};