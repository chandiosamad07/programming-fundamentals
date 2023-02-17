#include<iostream>
using namespace std;
int main(){
	int day,year,month;
	cin>>day;
	year=day/365;
	day=day%365;
	month = day/30;
	day= day%30;
	

	cout<<"\n Total Year  "<<year;
	
	cout<<"\n Total Month  "<<month;
	
	cout<<"\n Total Day   "<<day;
	
	
	
	
	
	
	
	return 0;
}
