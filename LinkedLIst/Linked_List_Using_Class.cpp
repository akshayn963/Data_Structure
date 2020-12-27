#include<iostream>
#include<stdlib.h>
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
node *InsertAtBeg(node *n1,int data)
{
    node *ptr=new node();
     ptr->next=n1;
    ptr->data=data;
    return ptr;
}

node *InsertAtIndex(node*n1,int data,int index)
{
    node*ptr=new node();
    node*p=n1;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return n1;
}

 node *InsertAtEnd(node *n1,int data){
    node*ptr=new node();
   
    ptr->data=data;
    struct node*p=n1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return n1;
}
node *InsertAfterNode(node *n1,node *prevNode,int data){
   node*ptr=new node();

   ptr->data=data;
   ptr->next=prevNode->next;
   prevNode->next=ptr;
   return n1; 
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

int main()
{
    node *n1=createnode(10);
    node *n2=createnode(20);
    node *n3=createnode(30);

    connection(n1,n2);
    connection(n2,n3);

  cout<<"before node insertion "<<endl;
    traverse(n1);
    n1=InsertAtBeg(n1,5);
    InsertAtIndex(n1,25,2);
    n1=InsertAtEnd(n1,50);
    InsertAfterNode(n1,n2,25);
  cout<<endl<<"After node insertion"<<endl;
    traverse(n1);
    return 0;
}
