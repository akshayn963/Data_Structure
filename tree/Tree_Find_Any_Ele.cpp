#include<iostream>
using namespace std;

class node
{
    public:
     int data;
     node *left;
     node *right;
};

node *createnode(int input)
{
    node *newNode=new node();
    newNode->data=input;
    newNode->left=NULL;
    newNode->right=NULL;
    
    return newNode;
}

node *insertnode(node *root,int input)
{
    if(root== NULL)
    {
        return createnode(input);
    }
    if(input < root->data)
    {
        root->left=insertnode(root->left,input);
    }
    else if (input > root->data)
    {
        root->right=insertnode(root->right,input);
    }
    return root;
    
}

bool SearchNode(struct node* root, int key) 
{ 
    
    while (root != NULL)  
     { 
       
        if (key > root->data)   
            root = root->right; 
  
        
        else if (key < root->data) 
            root = root->left; 
        else
            return true; 
    } 
    return false; 
} 
int main()
{
    int a;
    struct node *root =NULL;
    root=insertnode(root,3);
    insertnode(root,4);
    insertnode(root,2);
    insertnode(root,5);
    insertnode(root,1);
    insertnode(root,3);
    a=SearchNode(root , 5);
    if (a) 
        cout << "Yes node found !!!!"; 
    else
        cout << "Not Found !!!!"; 
    return 0;

    return 0;
}