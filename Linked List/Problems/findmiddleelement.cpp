int getMiddle(Node *head)
{ 
    Node *tmp =head;
    int count=0;
    while(tmp!=NULL)
    {   count++;
        tmp=tmp->next;
    }
    int mid = count/2;
    count=0;
    tmp=head;
    while (count< mid)
    {
        count++;
        tmp=tmp->next;
        
    }
    return tmp->data;
   // Your code here
}


// Another Method

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{ 
    Node *slow =head;
    Node *fast=head;
    while( fast!=NULL && fast->next!=NULL )
    {
        slow=slow->next;
        fast=(fast->next)->next;
    }
    return slow->data;
   // Your code here
}
