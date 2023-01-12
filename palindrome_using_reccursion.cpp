#include<iostream>
using namespace std;

bool checkpalindrome( string& name , int i , int j )
{
    //base case
if(i>j)
return true;

if(name[i] != name[j])
{
    return false;
}
else{
    return checkpalindrome( name , i+1 , j-1);
}

}

int main()
{
string name = "abbcbba";
 bool ispalindorme = checkpalindrome(name , 0 , name.size()-1);
 
if(ispalindorme)
{
    cout<<"yes"<<" ";
}
else{
    cout<<"no"<<" ";
}
return 0 ;

    return 0; 
}