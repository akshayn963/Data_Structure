#include<iostream>
using namespace std;

static int count;
class node{
    public:
    int data;
    node *next;
};

node * createnode(int input){
    node *newNode=new node();
    newNode->data=input;
    newNode->next=NULL;
    count++;
 return newNode;
}
void connection(node*x,node*y){
    x->next=y;
}
void printMidNode(node *temp){
    for (int i =1; i < count; i++)
    {
        if (count % 2==0)
        {
            if(i==count/2){
            cout<<endl<<"middle element of linked-list ="<<temp->data<<endl;
            }
        }
        else
        {
           if(i == (count/2)+1)
           {
              cout<<endl<<"middle element of linked-list ="<<temp->data<<endl;
           }
           
        }
        temp=temp->next;
    }
    
}

void displayLL(node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    
    node *n1=createnode(10);
    node *n2=createnode(20);
    node *n3=createnode(30);
    node *n4=createnode(40);
    node *n5=createnode(50);
    node *n6=createnode(60);
    node *n7=createnode(70);

    connection(n1,n2);
    connection(n2,n3);
    connection(n3,n4);
    connection(n4,n5);
    connection(n5,n6);
    connection(n6,n7);

    displayLL(n1);
    printMidNode(n1);

    return 0;
}