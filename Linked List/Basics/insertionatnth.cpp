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

void insertatnth(int pos)
{
  struct node *tmp1 = (struct node*)malloc(sizeof(struct node*));
  struct node *tmp;
  int num;
  cout<<"\n Enter number to be inserted :";
  cin>>num;
  tmp1->data=num;
  tmp=head;
  for(int i=1;i<pos-1;i++)
  {
    tmp=tmp->next;
  }
  tmp1->next=tmp->next;
  tmp->next=tmp1;
   
  
}

int main(){
int n,pos;
cout<<"Enter the number of nodes ";
cin>>n;
createlist(n);
cout<<"Enter the positon at which new element is to be added";
cin>>pos;
insertatnth(pos);
display();


return 0;
}