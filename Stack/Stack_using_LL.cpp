#include<iostream>
#include<stdlib.h>

using namespace std;


void push(int);
void pop();
int isempty();
int isfull();
void display();


struct node
{
    int data;
    struct node * next;
};

struct node*top=NULL;
int count=0;

int isfull()
{
    if(count==4)
        return 0;
    else
        return 1;
}

void push(int input)
{
        int r=isfull();
        if(r==1)
        {
            struct node*newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = input;
            newnode->next = top;
            top=newnode;
            count++;
        }
        else
        {
            cout<<"stack is full";
        }
}

void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty ";
    }
    else
    {
        cout<<"poped element is "<<top->data;
        top=top->next;
        count--;
    }
}

void display()
{
    struct node*ptr;
    if(top==NULL)
    {
       cout<<"Stack is empty ";

    }
    else
    {
        ptr=top;
        cout<<"Stack Elements Are :"<<endl;
        /*for(int i=0;i<=4;i++)
        {
            if(ptr != NULL)
            {
                cout<<ptr->data;
                ptr=ptr->next;
            }

        }*/
        while(ptr!=0)
        {cout<<ptr->data<<" ";
                ptr=ptr->next;}


    }
}
/*
int main()
{
    int r,input,flag=1;


    while(flag==1)
    {
        cout<<endl<<"Enter choice"<<endl;
    cout<<endl<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;
    cin>>r;
        switch(r)
        {
            case 1: {
        cout<<"enter element to be pushed";
        cin>>input;
        push(input);}
        break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
        case 4 : flag =0;
        break;


        }

    }
}
*/

int main()
{
    int r,input;
    do{
    	cout<<endl<<"Select An Operation : ";
    	cout<<endl<<"1. PUSH in stack "<<endl;
    	cout<<"2. POP from Stack"<<endl;
    	cout<<"3. Display Stack"<<endl;
    	cout<<"4. Exit"<<endl;
   		cin>>r;

   			//cout<<"Enter Choice : "<<endl;
   			//cin>>r;
   			switch (r)
   			 {
   			 case 1 : {
   			 	cout<<"Enter a element to be PUSHed :"<<endl;
   			 	cin>>input;
   			 	push(input);
					break;
				}
   			 case 2 : pop();
      			  break;
   			 case 3: display();
      			  break;
      		 case 4 :
      			  break;
      		default : cout<<"Encorrect input"<<endl;
   			 }

		   }while(r!=4);

		return 0;
}

