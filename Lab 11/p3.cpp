#include<iostream>
using namespace std;

struct Book{
string book_title;
float book_price;
};


int main(){
	Book book[5];
	
	book[0].book_title="C++";
	book[0].book_price=200.00;
	
	
	book[1].book_title="JAVA";
	book[1].book_price=300.00;
	
	
	book[2].book_title=".NET";
	book[2].book_price=400.00;
	
	
	book[3].book_title="OS";
	book[3].book_price=350.00;
	
	cout<<book[0].book_title<<" , "<<book[0].book_price<<endl;
	
		
	cout<<book[1].book_title<<" , "<<book[1].book_price<<endl;
	
		
	cout<<book[2].book_title<<" , "<<book[2].book_price<<endl;
	
		
	cout<<book[3].book_title<<" , "<<book[3].book_price<<endl;
	
	cout<<"Enter title of book 5 ";cin>>book[4].book_title;
	cout<<"Enter price of book 5";cin>>book[4].book_price;
	
	
return 0;
}
