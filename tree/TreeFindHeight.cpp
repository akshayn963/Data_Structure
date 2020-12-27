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

int maxHeight(node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    int leftDepth=maxHeight(root->left);
     int rightDepth=maxHeight(root->right);

     if (leftDepth > rightDepth)
     {
        return leftDepth + 1;
     }
     else
     {
         return rightDepth+1;
     }

}

int main()
{
     node *root =NULL;
    root=insertnode(root,1);
    insertnode(root,2);
    insertnode(root,3);
    insertnode(root,4);
    insertnode(root,7);
    //insertnode(root,3);
    cout<<"Height Of a tree is : "<<maxHeight(root)<<endl;

    return 0;
}