#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node * createnode(int input){
    node *newNode=new node();
    newNode->data=input;
    newNode->next=NULL;
    
 return newNode;
}
void displayLL(node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void connection(node*x,node*y){
    x->next=y;
}
void removeDuplicates(node* temp){

    node *ptr1, *ptr2, *dup; 
    ptr1 = temp; 
  
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  

        while (ptr2->next != NULL) 
        { 
            
            if (ptr1->data == ptr2->next->data) 
            { 
                
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
                delete(dup); 
            } 
            else 
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
}
int main(){
    
    node *n1=createnode(10);
    node *n2=createnode(20);
    node *n3=createnode(30);
    node *n4=createnode(40);
    node *n5=createnode(50);
    node *n6=createnode(60);
    node *n7=createnode(30);

    connection(n1,n2);
    connection(n2,n3);
    connection(n3,n4);
    connection(n4,n5);
    connection(n5,n6);
    connection(n6,n7);

cout<<"Linked list before removing duplicates "<<endl;
    displayLL(n1);

removeDuplicates(n1); 
cout<<endl<<"Linked list after removing duplicates "<<endl;
    displayLL(n1);
    return 0;

    }