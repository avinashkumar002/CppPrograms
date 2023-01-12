#include<iostream>
using namespace std;

/*void swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ;
    *b= *a;
}*/

void printarray( int arr[] , int n ) 
{
    for ( int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<< " "; 
    }
cout<<endl;
}

void selectionsort( int arr[], int n)
{
    for (int a =0 ; a < n -1 ; a ++)
    {
        int minindex = a ; 
        for( int j = a+1; j<n ; j++)
        {
            if ( arr[j]< arr[minindex])
            minindex = j ;
        }
    swap(arr[minindex],arr[a]);
    } 
}
int main ()
{
  int data[] = { 20 , 12 , 10 , 15 , 2};
  int n = sizeof(data)/sizeof(data[0]);
    selectionsort(data, n );
    cout<<"sorted array";
    printarray(data , n);
}