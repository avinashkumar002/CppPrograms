#include<iostream>
using namespace std;

bool linsearch(int arr[],int size,int key)
{
    for(int i=0 ; i<size ; i++ )
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
return 0;
}
int main()
{
    int arr[10] = {1,8,15,20,26,50,-2,-8,-45,119};
    int key;
    cin>>key;
    bool found = linsearch(arr,10,key);

    if (found)
    {
        cout<<"key is present"<<endl;
    }
    else {
        cout<<"key is absent"<<endl;
    }
    return 0 ;
    }