#include<iostream>

using namespace std;


class Node
{
public:
int data;
Node *next;
};

Node *front = NULL;
Node *rear = NULL;


void enqueue ( int input )
{
 Node *ptr = new Node();
 ptr->data= input;
 ptr->next = NULL;
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->next = ptr;
  rear = ptr;
 }
}


void dequeue ( )
{
 if( front == NULL && rear == NULL )
 cout<<"Queue is empty\n";
 else

 if( front == rear)
 {

  front = rear = NULL;

 }
 else
 {
  Node *ptr = front;
  front = front->next;
  cout<<endl<<"Removed Element is "<<ptr->data<<endl;

 }
}


void displayQueue()
{
 if (front == NULL && rear == NULL)
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL )
  {
   cout<<ptr->data<<" ";
   ptr= ptr->next;
  }
 }
}
int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
        cout<<endl<<"Select An Operation : ";
    	cout<<endl<<"1. Enqueue  "<<endl;
    	cout<<"2. Dequeue"<<endl;
    	cout<<"3. Display"<<endl;
    	cout<<"4. Exit"<<endl;
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: displayQueue();
          break;
  case 4: flag = 0;
          break;

  }
 }

 return 0;
}
