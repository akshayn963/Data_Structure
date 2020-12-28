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

node *insertnode(node *root,int input)
{
    if(root==NULL)
    {
        return createnode(input);
    }
    if(input < root->data)
    {
        root->left=insertnode(root->left,input);
    }
    else if(input>root->data)
    {
        root->right=insertnode(root->right,input);
    }
    return root;
}

int main()
{
int r,n,temp,a=0;
    struct node*root = NULL;
  
    cout << " Enter how many elements (Nodes) you want to be inserted :";
    cin>>n;
    do{
        cout << " Enter Node to be inserted : ";
        cin>>temp;
        root=insertnode(root,temp);
        a++;
    }while(a<n);
    do{
    	cout<<endl<<"Select An Operation : ";
    	cout<<endl<<"1. Inorder Traversal "<<endl;
    	cout<<"2. Preorder Traversal "<<endl;
    	cout<<"3. Postorder Traversal"<<endl;
    	cout<<"4. Exit"<<endl;
   		cin>>r;

   			switch (r)
   			 {
   			 case 1 :
                cout<<"Inorder traversal : ";
                inorder(root);
					break;
				
   			 case 2 :
                cout<<"preorder traversal : ";
                preorder(root);
      			  break;
             case 3 : 
                cout<<"Postorder traversal : ";
                postorder(root);
      			  break;
      		 case 4 :
                    exit(1);
      			  break;
      	    default : cout<<"Encorrect input"<<endl;
   			 }

		   }while(r!=4);
    return 0;

}