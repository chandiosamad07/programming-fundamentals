#include <iostream>
using namespace std;
int main()
{
	int account_number, mini, balance;
	cout<<"Enter the account number:  ";
	cin>>account_number;
	char account_type;
	cout<<"Enetr the account type \'s\' for savings \'c\' for checking:  ";
	cin>>account_type;
	cout<<"Enter the minimium balance: ";
	cin>>mini;
	cout<<"Enter your account balance:  ";
	cin>>balance;
	
	if(account_type=='s')
	{
		if(balance<mini)
		{
			balance-=10;
			cout<<"Now your account balance is $"<<balance;
		}
		else
		{
			balance += ((4*balance)/100);
			cout<<"Now your account balance is $"<<balance;
		}
	}
	else if (account_type=='c')
	{
		if(balance<mini)
		{
			balance-=25;
			cout<<"Now your account balance is $"<<balance;
		}
		else
		{
			balance += ((3*balance)/100);
			cout<<"Now your account balance is $"<<balance;
		}
	}

	return 0;
}
