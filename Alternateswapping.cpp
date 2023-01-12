#include<iostream>
using namespace std;
void swapalternate(int rr[],int size)
{
    for(int i =0 ; i<size ; i+=2)
    {
        if(i+1<size)
        {
            swap(rr[i] , rr[i+1]);
        }
    }
}
void print( int rr[],int n){
    for( int i = 0 ; i<n ; i++)
{
    cout<<rr[i]<<" ";
}
cout<<endl;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    
    swapalternate(arr , 5 );
    print(arr , 5);

    swapalternate(brr , 6 );
    print(brr , 6);

    return 0;
}