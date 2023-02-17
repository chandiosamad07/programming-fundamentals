#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter two numbers : \n";
cin>>a>>b;
c=a;
a=b;
b=c;
cout<<"\nAfter swapping numbers are : \n";
cout<<a<<" "<<b;
return 0;
}
