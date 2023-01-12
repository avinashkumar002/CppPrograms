#include <iostream>
using namespace std;

int f(int n, int a , int b , int c)
{
    if(n==1) return a;
    if(n==2) return b;
    if(n==3) return c;
    int ans = f(n-1, a, b, c) + f(n-2, a , b, c) + f(n-3 , a, b ,c);
    return ans;
}


int main() {
    int x;
    cin>>x;
    while(x--)
    {
    int n, a, b, c ;
    cin>>a>>b>>c>>n;
    cout<<f(n , a, b , c)<<endl;
    }
	//code
	return 0;
}