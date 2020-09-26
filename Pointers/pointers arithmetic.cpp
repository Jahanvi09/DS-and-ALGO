#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=10;
	int *p=&i;
	cout<<p<<endl;
	p=p+1;//p-- goes 4 byte back(sub)
	//p=p+2; add 8
	cout<<p<<endl;//shifts 4 byte next in address(add)
	double d=122.456;
	double *dp=&d;// adds 8 in the address
	cout<<dp<<endl;
	dp++;
	cout<<dp<<endl;
	
	return 0;
}
