#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i , j ;
   for(i=0;i<=9;i++)
 {
     cout<<arr[i]<<" ";
     
}
cout<<endl;
    for(j=9 ; j>=0 ; j--)
    {
        cout<<arr[j]<<" ";
    }
return 0 ;
}