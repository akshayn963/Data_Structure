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

void postorder(node *root)
{
   
    if(root!=NULL)
    {
          
          postorder(root->left);
          postorder(root->right);
          cout<<root->data<<" ";
    }
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

int main()
{
    node*root = NULL;
    root = insertnode(root,4); 
    insertnode(root,5);
    insertnode(root,2);
    insertnode(root,9);
    insertnode(root,1);
    insertnode(root,3);
    cout<<"Preorder traversal : ";
    postorder(root);  // calling inorder
    return 0;
}