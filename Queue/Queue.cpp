#include<iostream>

using namespace std;

#define size 5

void enqueue();
void dequeue();
void peek();
void display();

int queue[size];
int front=-1;
int rear=-1;
int x;

int main(){
     while(true){
        int ch;
        cout<<"press 1.enqueue 2.dequeue 3.display 4.peek "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            cout<<"invalid input "<<endl;
            break;
        }

    }
    
}

void enqueue(){
    cout<<"enter the data = ";
    cin>>x;
    if(rear==size-1){
        cout<<"queue is full...u cant enter data "<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    
    if(front==-1 && rear==-1){
        cout<<"queue is empty . no data in queue "<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
        
    
}

void display(){
    
    if(front==-1 && rear==-1){
        cout<<"queue is empty "<<endl;
    }
    else{
        for(int i=front;i<rear+1;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
  
   
}

void peek(){
    if(front==-1 && rear==-1){
        cout<<"queue is empty . no data in queue "<<endl;
    }
    else{
        cout<<queue[rear]<<endl;
    }
   
}