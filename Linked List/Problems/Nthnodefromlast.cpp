
       struct Node *tmp1 ,*tmp2;
    tmp1 =head;
    tmp2 =head;
    int c=0;
    while (c<n)
    {  
        
       if(tmp1==NULL)
        {
           
            if(c!=n)
              return -1;
            break;
        }
        tmp1=tmp1->next;
        c++;
       
        
    }
    if(tmp1==NULL)
    return tmp2->data;
    if(!tmp1)
        return -1;
   
    while (tmp1!=NULL)
    {
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return tmp2->data;