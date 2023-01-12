#include<iostream>
using namespace std;

void printarray( int arr[] , int n )
 {
    for( int a = 0; a < n ; ++a)
    {
        cout<<arr[a]<<" ";
    }
 
 }


 void bubblesort( int arr[], int n )
 {
    for( int i = 0 ; i < n ; ++i)
    {
        for( int j = 0 ; j < n-i; ++j )
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
 }

 int main ()
 {
    int array[]= {20 , 12 , 10 , 15 , 2};
    int n = sizeof(array)/sizeof(array[0]);
    bubblesort(array,n);
    cout<<"sorted array"<<" ";
    printarray(array,n);
    return 0;
 }