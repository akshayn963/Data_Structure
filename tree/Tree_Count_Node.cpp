#include<iostream>
using namespace std;

int n =1;
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

int CountNodes(node*root)
{
    if(root==NULL)
        return 0;
    if(root->left!=NULL)
    {
        n=n+1;
        n=CountNodes(root->left);
    }
    if(root->right!=NULL)
    {
        n=n+1;
        n=CountNodes(root->right);
    }
    return n;
}


int main()
{
    struct node *ptr =NULL;
    ptr=insertnode(ptr,3);
    insertnode(ptr,4);
    insertnode(ptr,2);
    insertnode(ptr,5);
    insertnode(ptr,1);
    insertnode(ptr,3);
    cout<<"Total no of nodes in tree "<<CountNodes(ptr)<<endl;

    return 0;
}