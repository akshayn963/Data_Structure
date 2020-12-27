#include<iostream>
using namespace std;

int main()
{
int size;
cout<<"enter size of array:"<<endl;
cin>>size;
int arr[size];
cout<<"enter elements of array:"<<endl;
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
cout<<"elements of array:"<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
		
	}  

 for(int i=0;i<size;i++)
 {
     for(int j=0;j<(size-1);j++)
     {
            if(arr[j]<arr[j+1])
            {
                int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
            }
     }

 }     

cout<<"sorted elements are:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

}

