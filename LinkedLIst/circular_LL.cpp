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

node * lastnode(node* n1,int input)
{
node * lastNode=new node();
lastNode->data=input;
lastNode->next=n1;
return lastNode;
}


void connection(node *x,node *y)
{
   x->next=y;
}

void traverse(node *n1){
    node *temp=n1;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while (temp!=n1);
    
}

int main()
{
    node *n1=createnode(10);
    node *n2=createnode(20);
    node *n3=createnode(30);
    node *n4=lastnode(n1,40);
    connection(n1,n2);
    connection(n2,n3);
    connection(n3,n4);
  cout<<"circular linked list = "<<endl;
    traverse(n1);
   
    return 0;
}