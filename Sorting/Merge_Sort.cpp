 #include <iostream>

using namespace std;
 
 
void merge(int A[ ] , int start, int mid, int end) {
//stores the starting position of arrays in variables.
int p = start ,q = mid+1;
//size_arr = end-start+1;
int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {
    if(p > mid)      //checks if first array comes to an end or not .
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   //checks if second array comes to an end or not
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     //checks which array has smaller element.
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   // merging both array
     A[ start++ ] = Arr[ p ] ;                          
  }
}


void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
            //divide array in 2 array .
           int mid = (start + end ) / 2 ; 
           // sort the 1st part of array .          
           merge_sort (A, start , mid ) ;
           // sort the 2nd part of array.                 
           merge_sort (A,mid+1 , end ) ;              

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
   }                    
}


int main(){

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

merge_sort(arr,0,size-1);



cout << " Elements after sorting" << endl;
for (int i= 0;i<size;i++){
    cout<< arr[i]<<endl;
}


}
