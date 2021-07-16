//Function to find intersection point in Y shaped Linked Lists . Hashing method
int intersectPoint(Node* head1, Node* head2)
{  
    map <Node *, int> traversed;
    
    Node *tmp1, *tmp2;
    tmp1=head1;
    tmp2=head2;
    while(tmp1!=NULL)
    {
      
            traversed[tmp1]=1;
        
        
        tmp1=tmp1->next;
    }
    
     while(tmp2!=NULL)
    {
        if(traversed.find(tmp2)!=traversed.end())
          return tmp2->data;
        
        
        tmp2=tmp2->next;
       
    }
    
     return -1;
    
    
    
}


// Other way to do  it is 

// 1. count both the nodes
// 2. Traverse to longes till you reach (c1-c2 )nodes
// 3. Then traverse to both compare and go 