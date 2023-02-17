#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout<<"Enter the Number1:  ";
	cin>>num1;
	cout<<"Enter the Number2:  ";
	cin>>num2;
	cout<<"Enter the Number3:  ";
	cin>>num3;
	if(num1<num2 && num1<num3)
	{
		cout<<num1<<endl;
		if(num2<num3)
		{
			cout<<num2<<endl;
			cout<<num3<<endl;
		}
		else if (num3<num2)
		{
		cout<<num3<<endl;
		cout<<num2<<endl;
		}
	}
	else if(num2<num3 && num2<num1)
	{
		cout<<num2<<endl;
		if(num1<num3)
		{
			cout<<num1<<endl;
			cout<<num3<<endl;
		}
		else if (num3<num1)
		{
		cout<<num3<<endl;
		cout<<num1<<endl;
		}
	}
	else if(num3<num2 && num3<num1)
	{
		cout<<num3<<endl;
		if(num2<num1)
		{
			cout<<num2<<endl;
			cout<<num1<<endl;
		}
		else if (num1<num2)
		{
		cout<<num1<<endl;
		cout<<num2<<endl;
		}
	}
	
	return 0;
}
