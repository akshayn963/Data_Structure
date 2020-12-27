#include<iostream>
using namespace std;

void insertionSort(int a[],int n)
{
    int i,j,temp;
    for (i=1;i<n;i++)
    {
        temp=a[i];

        for(j=i-1 ; j>=0 && temp < a[j] ; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}

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

insertionSort(arr ,size);


cout<<"sorted elements are:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}

}