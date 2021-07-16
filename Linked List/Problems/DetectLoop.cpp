// Hashing Method

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        map <Node *,int> Count;
        Node *tmp =head;
        while(tmp!=NULL)
        {
            if ( Count.find(tmp) == Count.end())
            {
                
                Count[tmp]=1;
                
            }
            else
               return true;
               
            tmp=tmp->next;
        }
        return false;
    }
};

//Floyd's Algorithm

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode *s = head;
        ListNode *f = head;
        while(s && f && f->next)
        {
            s=s->next;
            f=(f->next)->next;
            if(s==f)
                return true;
        }
        
        return false;
        
    }
};