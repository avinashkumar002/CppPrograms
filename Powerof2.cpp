#include<iostream>
using namespace std;

bool power( int n )
{
    // base case 
    if(n<2)
    return false;
    // recurssive call
    if(n>=2)
    {while(n>=2){
       n = n/2;
    //    cout<<n<<" ";
       power(n);
    }}
    //  power(n);
}
int main()
{
int n=32; 
// power(n);
 
cout<<power(n);;

}