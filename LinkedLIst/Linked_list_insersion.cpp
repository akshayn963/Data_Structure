#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

 void LinkedListTraverse(struct node *ptr){

     while(ptr!=NULL){
         cout<<"element of linked list ="<<ptr->data<<endl;
         ptr=ptr->next;
     }
 }

struct node *InsertAtBeg(struct node *first,int data){
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=first;
    ptr->data=data;
    return ptr;
}

struct node *InsertAtIndex(struct node*first,int data,int index){
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
    struct node*p=first;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return first;
}

struct node *InsertAtEnd(struct node *first,int data){
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
   
    ptr->data=data;
    struct node*p=first;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return first;
}

struct node *InsertAfterNode(struct node *first,struct node *prevNode,int data){
   struct node*ptr=(struct node *)malloc(sizeof(struct node));

   ptr->data=data;
   ptr->next=prevNode->next;
   prevNode->next=ptr;
   return first; 
}



int main()
{
struct node *first;
struct node *second;
struct node *third;
struct node *fourth;

first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

cout<<"before node insertion"<<endl;

LinkedListTraverse(first);

//first=InsertAtBeg(first,5);
//InsertAtIndex(first,25,2);
//first=InsertAtEnd(first,50);
InsertAfterNode(first,second,25);
cout<<"After node insertion"<<endl;
LinkedListTraverse(first);
return 0;
}