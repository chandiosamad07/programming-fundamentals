#include <iostream>
#include <climits> //This header defines constants with the limits of fundamental integral types for
//the specific system and compiler implementation used.
#include <cfloat>
using namespace std ;
int main ()
{
short s1 = 10 ;
signed short s2 = 20 ;
unsigned short s3 = 30 ;
int i1 = 10 ;
signed int i2 = 20 ;
unsigned int i3 = 30 ;
long l1 = 10 ;
signed long l2 = 20 ;
unsigned long l3 = 30 ;
long long ll1 = 10 ;
signed long long ll2 = 20 ;
unsigned long long ll3 = 30 ;
float f = 9.123456789 ;
double d = 9.123456789000000 ;
long double ld = 9.1234567890000000000 ;
cout << "\n\n Check the upper and lower limits of countable datatypes :\n";
cout << "--------------------------------------------------\n";
cout << " The maximum limit of int data type : " << INT_MAX << endl;
cout << " The minimum limit of int data type : " << INT_MIN << endl;
cout << " The maximum limit of unsigned int data type : " << UINT_MAX << endl;

cout << " The maximum limit of long long data type : " << LLONG_MAX << endl;
cout << " The minimum limit of long long data type : " << LLONG_MIN << endl;
cout << " The maximum limit of unsigned long long data type : " << ULLONG_MAX << endl;
cout << " The minimum limit of short data type : " << SHRT_MIN << endl;
cout << " The maximum limit of short data type : " << SHRT_MAX << endl;
cout << " The maximum limit of unsigned short data type : " << USHRT_MAX << endl;
cout << " The minimum limit of float data type : " << FLT_MIN << endl;
cout << " The maximum limit of float data type : " << FLT_MAX << endl;
cout << " The minimum limit of double data type : " << DBL_MIN << endl;
cout << " The maximum limit of double data type : " << DBL_MAX << endl;
cout << " The minimum limit of long double data type : " << LDBL_MIN << endl;
cout << " The maximum limit of long double data type : " << LDBL_MAX << endl;
cout << endl;
cout << "\n\n Check the space of memory occupied by countable datatypes :\n";
cout <<"The s1 size in memory = " <<sizeof (s1) <<endl;
cout <<"The s2 size in memory = " <<sizeof (s2) <<endl;
cout <<"The s3 size in memory = " <<sizeof (s3) <<endl;
cout <<"The i1 size in memory = " <<sizeof (i1) <<endl;
cout <<"The i2 size in memory = " <<sizeof (i2) <<endl;
cout <<"The i3 size in memory = " <<sizeof (i3) <<endl;
cout <<"The l1 size in memory = " <<sizeof (l1) <<endl;
cout <<"The l2 size in memory = " <<sizeof (l2) <<endl;
cout <<"The l3 size in memory = " <<sizeof (l3) <<endl;
cout <<"The ll1 size in memory = " <<sizeof (ll1) <<endl;
cout <<"The ll2 size in memory = " <<sizeof (ll2) <<endl;
cout <<"The ll3 size in memory = " <<sizeof (ll3) <<endl;
cout <<"The f size in memory = " <<sizeof (f) <<endl;
cout <<"The d size in memory = " <<sizeof (d) <<endl;
cout <<"The ld size in memory = " <<sizeof (ld) <<endl;
return 0 ;
}
