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

int minValue(node *n)
{
  node *n1=n;
  while(n1->left !=NULL)
  {
      n1=n1->left;
  }
  return (n1->data);
}


int maxValue(node *n)
{
  node *n2=n;
  while(n2->right !=NULL)
  {
      n2=n2->right;
  }
  return (n2->data);
}

int SecMax(node *n)
{
    node *n1=n;
   if (n1->right == NULL && n1->left != NULL) {  
        return maxValue(n1->left);  
    }  
    

    if (n1->right != NULL &&  
            n1->right->left == NULL &&  
            n1->right->right == NULL) {  
        return (n1->data);  
    }  

    return SecMax(n1->right); 
}



int main()
{
    node *ptr =NULL;
    ptr=insertnode(ptr,50);
    insertnode(ptr,14);
    insertnode(ptr,20);
    insertnode(ptr,510);
    insertnode(ptr,100);
    insertnode(ptr,310);
    cout<<"Minimum Value in the tree : "<<minValue(ptr)<<endl;
    cout<<"Maximum Value in the tree : "<<maxValue(ptr)<<endl;
    cout<<"second Maximum Value in the tree : "<<SecMax(ptr)<<endl;
    return 0;
}