#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*tail;
int x;

void create(){    //insertion at end
    cout<<"enter the data ";
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
   
    if(head==NULL){
        tail=head=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void insertAtBeg(){
    cout<<"enter the data ";
    cin>>x;
    struct node *newnode=new struct node;
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

void insertAtPosition(){
    int pos;
    temp=head;
    cout<<"enter the position = ";
    cin>>pos;
    cout<<endl;
    
    if(pos<1){
        cout<<"Invalid postion ";
    }
    else if(pos==1){
        insertAtBeg();
    }
    else{
        cout<<"enter the data ";
        cin>>x;
        struct node *newnode=new struct node;
        newnode->data=x;
        newnode->prev=NULL;
        newnode->next=NULL;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
    }
}

void display(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int ch;
    while (true){
        cout<<"press 1.insert_at_end 2.insert_at_begining 3.insert_at_position 4.display"<<endl;
        cout<<"enter your choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            create();
            break;

        case 2:
            insertAtBeg();
            break;

        case 3:
            insertAtPosition();
            break;
        
        case 4:
            display();
            break;
        
        default:
        cout<<"invalid choice "<<endl;
            break;
        }
    }
}
   


    
