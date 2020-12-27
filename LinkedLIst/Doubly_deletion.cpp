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

void delFromBeg(){
    if(head==NULL){
        cout<<"list is empty "<<endl;
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);    
    }
    
}
void delFromEnd(){
     if(head==NULL){
        cout<<"list is empty "<<endl;
    }
    else{
        temp=tail;
        tail=tail->prev;
        tail->next=0;
        free(temp);
    }
}
void delFromPos(){
    temp=head;
    int pos;
    cout<<"enter the position ";
    cin>>pos;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
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
        cout<<"press 1.delete_at_end 2.delete_at_begining 3.delete_at_position 4.display 5.create"<<endl;
        cout<<"enter your choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            delFromEnd();
            break;

        case 2:
           delFromBeg();
            break;

        case 3:
            delFromPos();
            break;
        
        case 4:
            display();
            break;
        
        case 5:
            create();
            break;

        default:
        cout<<"invalid choice "<<endl;
            break;
        }
    }
}