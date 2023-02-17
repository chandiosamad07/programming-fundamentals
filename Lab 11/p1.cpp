#include<iostream>
using namespace std;

struct student{
	
	string cms_id;
	string std_name;
	string sub_name;
	float sub_marks;
	
	
};

int main(){
	student std1={"123","ABC","Prog",85.5};
	student std2;
	std2.cms_id="111";
	std2.std_name="XYZ";
	std2.sub_name="prog";
	std2.sub_marks=73.5;
	
	cout<<std1.cms_id<<endl;
		cout<<std1.std_name<<endl;
			cout<<std1.sub_name<<endl;
		cout<<std1.sub_marks<<endl;
		
			cout<<std2.cms_id<<endl;
		cout<<std2.std_name<<endl;
			cout<<std2.sub_name<<endl;
		cout<<std2.sub_marks<<endl;
	
	
	return 0;
}
