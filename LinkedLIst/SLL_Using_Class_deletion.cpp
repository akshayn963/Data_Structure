#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node * createnode(int input)
{
node * newNode=new node();
newNode->data=input;
newNode->next=NULL;
return newNode;
}
void connection(node *x,node *y)
{
   x->next=y;
}

void traverse(node *temp){
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

node *DeleteAtBeg(node *n1)
{
    node *ptr=n1;
     n1=ptr->next;
    
    free(ptr);
    return n1;
}

node *DeleteAtIndex(node*n1,int index)
{
    
    node*p=n1;
    node *q=n1->next;
    for (int i = 0; i < index - 1; i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
   
    return n1;
}

node *DeleteAtEnd(node *n1){
    
    node*p=n1;
    node *q=n1->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;

    }

    p->next=NULL;
    free(q);
    return n1;
}
node *DeleteNodeWithValue(node*n1,int value)
{
    
    node*p=n1;
    node *q=n1->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;

    }
    if(q->data == value){
    p->next=q->next;
    free(q);
    }
    return n1;
}
int main(){
    node *n1=createnode(10);
    node *n2=createnode(20);
    node *n3=createnode(30);

    connection(n1,n2);
    connection(n2,n3);

  cout<<"before node deletion"<<endl;
    traverse(n1);
    //n1=DeleteAtBeg(n1);
   // DeleteAtIndex(n1,2);
   // n1=DeleteAtEnd(n1);
    DeleteNodeWithValue(n1,20);
  cout<<endl<<"After node deletion"<<endl;
    traverse(n1);

    return 0;
}