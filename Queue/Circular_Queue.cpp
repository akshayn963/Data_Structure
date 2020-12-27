#include<iostream>
#include<stdlib.h>
#define SIZE 5
using namespace std;


class CircularQueue
{
private:
    int arr[5];
    int front;
    int rear;
    int count;

public:

    CircularQueue()
    {
        count=0;
        front= -1;
        rear = -1;
        cout<<"Calling const --------->"<<endl;
        for(int i=1;i<5;i++)
        {
            arr[i]=0;
        }
    }

    int isfull()
    {
        if((rear+1)%5 == front)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }

    int isempty()
    {
        if(front== -1 && rear== -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }


    void enqueue(int input)
    {
        if(isfull())
        {
            cout<<"Queue is full !!!"<<endl;
            return;
        }
        else if(isempty())
        {
            front=0;
            rear=0;
            arr[rear]=input;
            count++;
        }
        else
        {
            rear=(rear+1)%5;
            arr[rear]=input;
            count++;
        }
    }


    int dequeue()
    {
        int a,x=0;
        a=isempty();
        if(a)
        {
            cout<<"Queue is empty"<<endl;
            return x;
        }
        else if(rear == front)
        {
            x=arr[rear];
            front = -1;
            rear =-1;
            count--;
            return x;

        }
        else
        {
            cout<<"Poped element is : "<<front<<endl;
            x=arr[front];
            arr[front]=0;
            front=(front +1)%5;
            count--;
            return x;
        }

    }

    void display()
    {
        int i;
            cout<<"Queue elements are : ";
            for( i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    CircularQueue q1;
    int r,input;
    do
    {

      cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.display"<<endl<<"4.Exit"<<endl<<"Enter your choice : "<<endl;
      
      cin>>r;
      switch(r)
      {
      case 1 :
      cout<<"Enter no to be push : ";
      cin>>input;
      q1.enqueue(input);
      break;


      case 2 : q1.dequeue();
      break;

      case 3 : q1.display();
      break;
      
      case 4: exit(1);

      default:
      cout<<"invalid choice !!!!!"<<endl;
      break;
      }
    }while(r!=0);
return 0;

}
