#include<iostream>
using namespace std;
int size;
void linearSearch(int a[], int n) {
	int temp = -1;
	for(int i=0; i<size; i++) {
		if(a[i]==n) {
			cout<<"Elements found at location : "<<i<<endl;
			temp = 0;
		}

	}
	if(temp == -1) {
		cout<<"No Element found ";
	}

}



int main()
{

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
cout<<"Please Enter an element to search : "<<endl;
	int num;
	cin>>num;

    linearSearch(arr,num);
	return 0;
}