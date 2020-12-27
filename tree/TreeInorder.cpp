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

void inorder(node *root)
{
 if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

 node*insertnode(node* root , int input)
{
    if(root == NULL)
    {
        return createnode(input);
    }
    if(input < root->data)
        root->left = insertnode(root->left ,input);
        else if(input > root->data)
        root->right = insertnode(root->right,input);
        return root;
}

int main()
{
    node *root=NULL;
    root=insertnode(root,8);
    insertnode(root,2);
    insertnode(root,6);
    insertnode(root,40);
    insertnode(root,5);
    insertnode(root,3);
     cout<<"Inorder traversal : ";
    inorder(root);  // calling inorder
    return 0;


}