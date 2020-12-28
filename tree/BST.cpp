#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct node
{
    int data; 
    struct node *right; 
    struct node *left; 
};

struct node* search(struct node * root, int x)
{
    if(root==NULL || root->data==x) 
        return root;
    else if(x > root->data) 
        return search(root->right, x);
    else 
        return search(root->left,x);
}
struct node* new_node(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}
struct node* insert(struct node *root, int x)
{
    
    if(root==NULL)
        return new_node(x);
    else if(x>root->data)
        root->right = insert(root->right, x);
    else 
        root->left = insert(root->left,x);
    return root;
}



void preorder(node *root)
{
    if(root!=NULL)
    {
       cout<<root->data<<" ";
       preorder(root->left);
       preorder(root->right);
    }
}

void inorder(node *root)
{
    if(root!=NULL)
    {
      
       inorder(root->left);
        cout<<root->data<<" ";
       inorder(root->right);
    }
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
    struct node *root;
    root = new_node(20);
    insert(root,5);
    insert(root,1);
    insert(root,15);
    insert(root,9);
    insert(root,7);
    insert(root,12);
    
    inorder(root);
    cout<< endl;

    cout<<"element to be search : "<<search(root,9)<<endl;
    cout<<"Minimum Value in the tree : "<<minValue(root)<<endl;
    cout<<"Maximum Value in the tree : "<<maxValue(root)<<endl;
    cout<<"second Maximum Value in the tree : "<<SecMax(root)<<endl;
    
    return 0;
}