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
cout<<"unsorted elements of array:"<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
		
	}  

    int start=0;
    int end=size-1;
 

  while(start!=end)
    {
        int max=0;
        for(int maxTraverse=start; maxTraverse<=end; maxTraverse++)
        {

            if(arr[maxTraverse] > max)
                max=arr[maxTraverse];
        }

        for(int findMaxPos=start; findMaxPos<=end; findMaxPos++)
        {
            if(arr[findMaxPos]==max)
            {
                int temp=arr[end];
                arr[end]=arr[findMaxPos];
                arr[findMaxPos]=temp;
                break;
            }
        }
        end--;
    }


cout<<"sorted elements are:"<<endl;
	for(int i=start;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

}