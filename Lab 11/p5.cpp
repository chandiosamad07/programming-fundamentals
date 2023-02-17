#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
struct customertype{
	
	char firstName[15];
	char lastname[15];
	int id;
	double balance;
	
};
int main(){
	
	customertype cust;
	ifstream infile;
	ofstream outfile;
	infile.open("f:\\customerData.txt");
	if(!infile){
		cout<<"The input file does not match"<<endl;
		return 1;
	}
	
	outfile.open("f:\\customer.dat",ios::binary);
	infile>>cust.id>>cust.firstName>>cust.lastname>>cust.balance;
	while(infile){
		outfile.write(reinterpret_cast<const char *>(&cust),sizeof(cust));
		infile>>cust.id>>cust.firstName>>cust.lastname>>cust.balance;
		
	}
	infile.close();
	infile.clear();
	outfile.close();	
	
	infile.open("f:\\customer.dat",ios::binary);
	if(!infile){
		cout<<"The file does not exist "<<endl;
		return 1;
		
	}
	cout<<left<<setw(8)<<"ID"<<setw(16)<<"First Name"<<"Last Name"<<setw(10)<<"Balance"<<endl;
	cout<<fixed<<showpoint<<setprecision(2);
	infile.read(reinterpret_cast<char *>(&cust),sizeof(cust));
	while(infile){
		cout<<left<<setw(8)<<cust.id<<setw(16)<<cust.firstName<<setw(16)<<cust.lastname<<right<<setw(10)<<cust.balance<<endl;
		infile.read(reinterpret_cast <char *>(&cust),sizeof(cust));
	}
	
	infile.close();
return 0;	
}
