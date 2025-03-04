#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct node
{
    int data; 
    struct node *right_child; 
    struct node *left_child; 
};

struct node* search(struct node * root, int x)
{
    if(root==NULL || root->data==x) 
        return root;
    else if(x > root->data) 
        return search(root->right_child, x);
    else 
        return search(root->left_child,x);
}


struct node* find_minimum(struct node * root)
{
    if(root == NULL)
        return NULL;
    else if(root->left_child != NULL) 
        return find_minimum(root->left_child); 
    return (root);
}


struct node* new_node(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
  
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) 
        root->right_child = insert(root->right_child, x);
    else 
        root->left_child = insert(root->left_child,x);
    return root;
}


struct node* remove(struct node * root, int x)
{
    
    if(root==NULL)
        return NULL;
    if (x>root->data)
        root->right_child = remove(root->right_child, x);
    else if(x<root->data)
        root->left_child = remove(root->left_child, x);
    else
    {
       
        if(root->left_child==NULL && root->right_child==NULL)
        {
            free(root);
            return NULL;
        }

       
        else if(root->left_child==NULL || root->right_child==NULL)
        {
            struct node *temp;
            if(root->left_child==NULL)
                temp = root->right_child;
            else
                temp = root->left_child;
            free(root);
            return temp;
        }

        else
        {
            struct node *temp = find_minimum(root->right_child);
            root->data = temp->data;
            root->right_child = remove(root->right_child, temp->data);
        }
    }
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL) 
    {
        
        inorder(root->left_child); 
        cout<< root->data<<" "; 
        inorder(root->right_child);
    }
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

    root = remove(root, 1);
    inorder(root);
    cout<< endl;
    return 0;
}