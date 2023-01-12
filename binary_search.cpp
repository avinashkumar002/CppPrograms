#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
int start = 0 ;
int end = size - 1;
int mid = (start+end)/2;
  

while(start<=end){
 if (arr[mid]==key)
 {
     return mid ;
 }
if (key < arr[mid])
 {
     end = mid-1;
 }
 else
 {
     start = mid+1;
 }
mid = (start + end ) / 2;
}
return -1;
}

int main()
{
    int even[6]={2,5,8,9,15,17};
    int odd[5]={2,8,9,15,16};

    int evenindex = binarysearch(even , 6 , 20);
    int oddindex =  binarysearch(odd , 5 ,13);

    cout<<"index of 20 is "<< evenindex ;
    cout<<"";
    cout<< "index of 13 is "<< oddindex ;
    return 0 ;

}


