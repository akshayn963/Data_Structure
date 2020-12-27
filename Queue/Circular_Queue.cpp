#include<iostream>


using namespace std;
void insert();
void delet();
int rear=-1;// insert element to rear side 
int front =-1;// delete
#define size 3
int queue[size];


void  insert()
{
	int input;
	cout<<"enetr elemnet"<<endl;
	cin>>input;
	if(rear==-1 && front==-1)
	{
		rear=front=0;
		queue[rear]=input;
	cout<<"insert="<<queue[rear]<<endl;
	}
	
	else if(((rear+1)%size)==front)
	{
		cout<<"queue is full";
	}
	
	else
	{
		rear=(rear+1)%size;
		
	queue[rear]=input;
	cout<<"insert"<<queue[rear]<<endl;
	}
}

void delet()
{
	if(rear==-1 && front==-1)
	{
		cout<<"is empty"<<endl<<"reinsert element="<<endl;
	}
	
	else if(front==rear)// at 3rd time both equal
	{

		cout<<"delete"<<queue[front]<<endl; // delete 3rd element here 
		front=rear=-1;

	}
	
	else
	{
		
		
		front=(front)%size;
		cout<<"delete="<<queue[front]<<endl;
		front++;
	}
}
void display()
{
	if (front == -1) 
    { 
        cout<<"\nQueue is Empty"<<endl; 
        return; 
    } 
    cout<<"\nElements in Circular Queue are: "; 
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            cout<<queue[i]<<endl; 
    } 
    else
    { 
        for (int i = front; i < size; i++) 
            cout<<queue[i]; 
  
        for (int i = 0; i <= rear; i++) 
            cout<<queue[i]; 
    } 
	
	}
	    


int main()
{
	
	int ch;
	do
	{
	
	cout<<"Enter ur choice :"<<endl;
	cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Exit"<<endl;

	cin>>ch;

	switch(ch)
	{
		
		case 1:
				insert();
                  break;
                  
        case 2:
        	  	delet();
        	  	break;
        case 3:
         	
        	  	display();
        	  	break;
        
         case 4:
         	
        	  	exit(1);
        	  	break;
        	  	
        default:
        	cout<<"Invalide choice";

                  	
	}
	

} while(ch!=0);
	
	return 0;
	
	
}

