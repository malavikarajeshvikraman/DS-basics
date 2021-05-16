#include<iostream>
using namespace std;


struct node {
  int data;
  struct node *next;
}*list,*head;

void createlist(int n)
{
  list=(struct node *)malloc(sizeof(struct node));
  struct node *tmp;
  int num;
  cout<<"\n Enter the first element in LL : ";
  cin>>num;
  list->data=num;
  list->next=NULL;
  head=list;
  for(int i=1;i<n;i++)
  {  tmp=(struct node *)malloc(sizeof(struct node));
     if(tmp==NULL)
     {
       cout<<"No memory available";
       break;
     }
     else
     {
       cout<<"\n Enter the element :";
       cin>>num;
       list->next=tmp;
       tmp->data=num;
       tmp->next=NULL;
       list=tmp;
     }

  }
}
void display()
{ struct node *tmp;
  tmp=head;
  while(tmp->next!=NULL)
  {
    cout<<"\n"<<tmp->data;
    tmp=tmp->next;
  }  
  cout<<"\n"<<tmp->data;
}

void deleteatbeg()
{
  struct node *tmp;
  int num;
  cout<<"\n The number being deleted is  : "<<head->data;
  tmp=head;
  head=head->next;
  free(tmp);
  
}

int main(){
int n;
cout<<"Enter the number of nodes ";
cin>>n;
createlist(n);
deleteatbeg();
display();


return 0;
}