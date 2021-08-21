class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    { 
        unordered_set <int> t;
        if(head==NULL) return NULL;
        Node * tmp =head;
        Node *p =NULL;
        while(tmp!=NULL)
        {    
            if(t.find(tmp->data)!=t.end())
            {   p->next=(tmp->next);
                tmp=tmp->next;
                continue;
            }
            else 
            {
                t.insert(tmp->data);
              
            }
              p=tmp;
              tmp=tmp->next;

        }
        
        return head;
    }
};