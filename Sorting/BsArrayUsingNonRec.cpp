#include<iostream>



using namespace std;

int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n, search, first, last, middle;
    first =0;
    search =20;
    last = 4;
    middle = (first +last) /2;

    while (first <= last ){
        if(arr[middle] == search){
            cout << "At index : "<< middle;
            break;
        }
        else if (arr[middle] > search){
            last = middle-1;
        }
        else{
            first = middle+1; 
        }
        middle = (first + last) /2;

    }
    if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
 
}