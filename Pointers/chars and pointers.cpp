#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[]={1,2,3};
	char b[]="abc";
	cout<<a<<endl;//address
	cout<<b<<endl;//abc bcoz it goes till end seaches for null in case of char array ;
	
	char*c=&b[0];
	cout<<c<<endl;//abc
	
	char c1='a';
	char*pc=&c1;
	cout<<c1<<endl;//a
	cout<<pc<<endl;// prints a first then garbage until it finds null
	
	char str[]="abcde";//str array first msake temp mem then make another memory and copies to it
	char *pstr="abcde";//it points to temp memory to same temp memory made by str
	//pstr may or may not give array not preffered
	//we prfefer str one 
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
