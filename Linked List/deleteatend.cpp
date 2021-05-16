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

void insertatend()
{
  struct node *tmp1;
  struct node *tmp;
  int num;
  tmp=head;
  while((tmp->next)->next!=NULL)
  {
    tmp=tmp->next;
  }
  tmp1=tmp->next;
  free(tmp1);
  tmp->next=NULL;
}

int main(){
int n;
cout<<"Enter the number of nodes ";
cin>>n;
createlist(n);
insertatend();
display();


return 0;
}