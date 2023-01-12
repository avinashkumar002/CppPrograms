#include<iostream>
using namespace std;

int firstocc(int arr[],int n , int key )
{
    int s = 0,e = n-1 ;
    int mid = s +(e-s)/2;
  int ans =-1;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid ;
            e = mid - 1 ;
        }
        else if (key > arr[mid])
        {
            s = mid +1;
        }    
        else if (key < arr[mid])
        {
            e = mid - 1 ;
        }
            mid = s + (e-s)/2;
        }
    return ans ;
}


int lastocc(int arr[],int n , int key )
{
    int s = 0,e = n-1 ;
    int mid = s +(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid ;
            s = mid + 1 ;
        }
        else if (key > arr[mid])
        {
            s = mid +1;
        }    
        else if (key < arr[mid])
        {
            e = mid -1 ;
        }
            mid = s + (e-s)/2;
        }
    return ans ;
}


int main ()
{
    int even[11] = {1 , 2, 4 , 4 , 4, 5 , 5 ,5 , 5 , 6 ,6 };
    

    cout<< "first occurence of 5 is at index  "<<firstocc(even , 11 , 5);
    cout<<endl;
    cout << "last occurence of 5 is at index  "<<lastocc(even , 11 , 5);
    return 0 ;
    
}