#include<iostream>
#include<stdlib.h>

using namespace std;

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
        
        while(ptr!=0)
        {cout<<ptr->data<<" ";
                ptr=ptr->next;}


    }
}


int main()
{
    cout<<endl<<"1. PUSH in stack "<<endl;
    	cout<<"2. POP from Stack"<<endl;
    	cout<<"3. Display Stack"<<endl;
    	cout<<"4. Exit"<<endl;
    int r,input;
    while(true){
    	cout<<endl<<"Select An Operation : ";
    	
   		cin>>r;

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
      		default : 
              cout<<"Encorrect input"<<endl;
   			 }

		   }

		return 0;
}

