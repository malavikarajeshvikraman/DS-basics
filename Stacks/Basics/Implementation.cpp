#include<bits/stdc++.h>
using namespace std;

struct node {
  int data;
  node *next = NULL;
};

class Stack {
  node *top = NULL;
  public:
  void push();
  void pop();
  void display();
};

void Stack::push(){
    node  *temp = new node;
    cout<<"Enter Data : ";
    int value;
    cin >> value; 
    temp -> data = value; 
    temp -> next = top;   
    top = temp; 

}

void Stack::pop (){
    if(top==NULL)
    {
      cout<<"\n"<<"No elements in stack";
    }
    else
    {
    cout << "Data to be deleted :"<<top->data;
    node *tmp = top;
    top=top->next;
    free(tmp);
    }
}

void Stack::display() {

  cout<<"The entire stack is ";
  node *tmp = top;
  while(tmp!=NULL)
  {
      cout<<"\n"<<tmp->data;
      tmp=tmp->next;
  }
}

int main() {
    Stack st;
    char ch;
    do {
        cout<<"Enter \n";
        cout << "1. P for push operation\n";
        cout << "2. R for pop operation\n";
        cout << "3. D for display operation\n";
        cout << "4. Q to quit\n";
        cin >> ch;
        switch(ch) {
            case 'P': st.push(); break;
            case 'R' : st.pop(); break;
            case 'D': st.display(); break;
        }
    }while (ch != 'Q');
    return 0;
}