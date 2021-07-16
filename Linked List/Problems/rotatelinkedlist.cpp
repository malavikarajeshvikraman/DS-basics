class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        int n=0,count =0;
        Node *tmp =head;
        Node *newhead;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            n++;
        }
        int split = k % n;
        if(split!=0){
        count=0;
        Node *tmp1 =head;
        while(count<split-1)
        {
            count++;
            tmp1=tmp1->next;
           
        }
        Node *tmp2 = tmp1->next;
        tmp1->next=NULL;
        newhead=tmp2;
        while(tmp2->next!=NULL)
        {
           
            tmp2=tmp2->next;
        }
        tmp2->next=head;
        
        return newhead;
        }
        else return head;
    }
};


// Method 2 :


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        int n=0,count =0;
        Node *tmp =head;
        Node *newhead;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=head;
        
        for(int i=0;i<k;i++)
        {
            tmp=tmp->next;
        }
        newhead=tmp->next;
        tmp->next=NULL;
        
        return newhead;
        
        
        
      
    }
};