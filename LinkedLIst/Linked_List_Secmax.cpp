#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node *prev;
	int max = 0 ;
	int secMax=0;
	
	
	Node *createNode(int d)
	{
		Node *n1 = new Node();
		n1->data = d;
		n1->next = NULL;
		n1->prev = NULL;
		if(n1->data > max)
		{
			secMax = max;
			max = n1->data;
		}
		else if(n1->data >secMax)
		{
			secMax = n1->data;
		}
		return n1;
	}
	void connection(Node *a, Node *b)
	{
		a->next =b;
		b->prev = a;
	}
	
	Node *t = NULL;
	void Traversal(Node * temp)
	{
		for(t =temp; t->next!=NULL; t=t->next )	;
		while(t != NULL)
		{
			cout<<t ->data<<endl;
		//	temp = temp ->next; 
			t = t ->prev; 
		}	
		
		cout<<" max node = "<<max;
			cout<<" sec max node = "<<secMax;
	}
};

int main()
{
	Node l1;
	Node *d1 = l1.createNode(10);
	Node *d2 = l1.createNode(50);
	Node *d3 = l1.createNode(5);
	Node *d4 = l1.createNode(2);
	l1.connection(d1,d2);
	l1.connection(d2,d3);
	l1.connection(d3,d4);
	l1.Traversal(d1);
}