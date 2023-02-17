				#include<iostream>
				using namespace std;
				
				struct student{
					
					string cms_id;
					string std_name;
					string sub_name;
					float sub_marks;
					
					
				void printstudentdata(void){
					cout<<"Student CMS ID "<<cms_id<<endl;
					
					cout<<"Student Name "<<std_name<<endl;
					
					cout<<"Subject Name  "<<sub_name<<endl;
					
					cout<<"Subject Marks  "<<sub_marks<<endl;
					
				}
};
				int main(){
					student std1={"023-19-0128","Abdul Samad","Programming",95.5};
					student std2={"023-19-0144","Tahir","Programming",85.5};
					student std3={"023-19-0133","Amjad Ali","Programming",75.5};
					std1.printstudentdata();
					std2.printstudentdata();
					std3.printstudentdata();
					
					
					
					return 0;
				}
