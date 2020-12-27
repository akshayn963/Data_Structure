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

    connection(n3,n2);
    connection(n2,n1);

  
    traverse(n3);
   
    return 0;
}