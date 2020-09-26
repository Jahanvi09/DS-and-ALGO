#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=10;
	cout<<&i<<endl;//prints adddress 0x is hexadecimal
	int *p=&i;
	cout<<p<<endl;//prints same value as &i 
	float f=10.4;
	float *pf=&f;
	cout<<pf<<endl;// stores float pointer and prints adddress
	double d=12233.4565;
	double *pd=&d;// stores double pointer and prints adddress
	cout<<pd<<endl;
	cout<<*p<<endl;// through dereferece we can get integer
	//if we have address we can get value 
	
	return 0;
}
