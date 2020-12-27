#include <iostream>
using namespace std;

void convertHeap(int arr[], int size, int x)
{
    int largest = x;
    int left = 2 * x + 1;
    int right = 2 * x + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != x)
    {
        swap(arr[x], arr[largest]);

        convertHeap(arr, size, largest);
    }
}

void heapSort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        convertHeap(arr, size, i);

    for (int i = size - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        convertHeap(arr, i, 0);
    }
}

void display(int arr[], int size)
{
    cout << "After sorting, the array is: \n";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
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
    heapSort(arr, size);
    display(arr, size);
}
