#include<iostream>
#include<iomanip>
using namespace std;
struct Book{
	string book_title;
	float book_price;
	void printbookdata(void){
		cout<<setw(15);
		
		cout<<book_title;
		
		
		cout<<setw(35);
		cout<<book_price<<endl<<endl<<endl;
		
	}
};



int main(){
	
	Book book[3];
	for(int i=0;i<=2;i++){
		cout<<"Enter Book"<<i+1<<" Title ";
		cin>>book[i].book_title;
		cin>>book[i].book_price;
		
	}
	
	system("cls");
	
	cout<<"================================================================="<<endl;
	cout<<setw(20);
	cout<<"Book title";
	cout<<setw(35);
	cout<<"Book Price";
	cout<<"\n================================================================"<<endl;
	for(int i=0; i<=2;i++){
		book[i].printbookdata();
	}
	
	return 0;
}
