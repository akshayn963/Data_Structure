#include<iostream>
#include<stdlib.h>
using namespace std;



// insertion at rear end of link list
    void connection(struct node*, struct node *);
    void traverse(struct node *);
    struct node* firstnode(int);
    struct node* createnode(int);
struct node
{
	int data;
	
	struct node * next;
};

struct node * firstnode(int input)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	
	n->data =input;
	n->next = NULL;
	
	return n;
}

struct node* createnode(int input)
{
	struct node *n1 = (struct node *)malloc(sizeof(struct node));
	
	n1->data=input;
	n1->next=NULL;
	
	return n1;
	
}

void connection(struct node *x, struct node *y)
{
	x->next=y;
}

void traverse(struct node *temp)
{
    cout<<"reverse linklist=";
	while(temp !=NULL)
	{
		//cout<<temp->next<<endl;
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
struct node * d=firstnode(10);
struct node* d1=createnode(20);
struct node* d2=createnode(30);
connection(d,d1);
connection(d1,d2);
traverse(d);
return 0;	
}
