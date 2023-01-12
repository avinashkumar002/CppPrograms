#include<iostream>
using namespace std;
int linearsearch( int arr[] , int size , int key)
{
    //base case
    if(size==0)
    return false;

    if(arr[0]==key)
    return true ;
   else
    {
         bool restpart = linearsearch(arr+1 , size-1 , key);
    
  
    return restpart;
    }
}
int main()
{
    int arr[5]= { 1,7,9,3,5};
    int size= 5;
    int key = 3;
    int ans = linearsearch( arr , size ,key);
    cout<<ans;

}