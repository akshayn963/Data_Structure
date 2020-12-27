 #include<iostream>

using namespace std;
#define SIZE 5

int arr[SIZE];
int front = -1;
int rear  = -1;

int isempty()
{
    if(front == -1 && rear == -1)
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
        if(rear == SIZE-1)
        {
            cout<<"Queue is full...";
        }
        else
        if(front == -1)
        {
            front =0;
        }
            rear++;

            arr[rear]=input;
            

}

void dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty";
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void displayQueue()
{
    if(isempty())
    {
        cout<<"queue is Empty ";
    }
    else
    for (int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
 int choice, flag=1, input;
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
          cin>>input;
          enqueue(input);
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
