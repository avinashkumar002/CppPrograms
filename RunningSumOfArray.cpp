#include<iostream>
using namespace std;



void runningsum( int arr[], int n)
{
    for(int i = 0 ; i < n; i++ )
   { int sum = 0;
        for( int j = 0 ; j<=i ; j++)
        {
            sum = sum+arr[j];
        }
        cout<< sum <<" ";
    }
}

int main ()

{
    int arr[4] ={1,2,3,4};

    runningsum( arr , 4);
   
     
     return 0 ;
}