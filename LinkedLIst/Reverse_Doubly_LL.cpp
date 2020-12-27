#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
		int data;
		node * next;
		node * prv;
};

 node * firstnode(int input)

{
	
 node *n1=new node();

  n1->data=input;
  n1->next=NULL;
  n1->prv=NULL;
   
   return n1;
}

node *createnode(int input)

{
	node* n2=new node();
     

	n2->data=input;
	n2->next=NULL;
	n2->prv=NULL;
	
	return n2;
	
}
 void connection(node *x,node *y)
{
	x->next=y;
	y->prv=x;
}
void traverse(node * temp)
{
	while(temp!=NULL)
	{
	
		cout<<temp->data<<endl;
		
		temp=temp->next;
		
	}
}

int main()
{
	node *d=firstnode(10);
	node *d1=createnode(20);
	node *d2=createnode(30);
	
	connection(d2,d1);
	connection(d1,d);
	
	traverse(d2);
	return 0;
}

