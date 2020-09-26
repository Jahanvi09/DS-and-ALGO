#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=10;
	int* p=&i;// p also stores in symbol table 
	cout<<sizeof(p)<<endl;//8 not a compulsion can vary
	
	int *q=p;// now i,p,q all will reflect changes pointing to same memory
	cout<<i<<endl;
	cout<<*p<<endl;
	i++;
	cout<<i<<endl;
	cout<<*p<<endl; //both will reflect changes bcoz accessing same memory
	int a=i;
	a++;// only a will change bcoz both are diff storage
	//int a=*p;
	//a++  this will also not reflect change bcoz of same memory
	//*P is also same storage reffering to i
	cout<<a<<endl;
	cout<<*p<<endl;
	i=12;
	cout<<i<<endl;
	cout<<*p<<endl;
	*p=23;
	cout<<i<<endl;
	cout<<*p<<endl;//both will change from both ways bcoz it is same storage
	(*p)++;
	cout<<i<<endl;
	cout<<*p<<endl;// it can be treated as int and will reflect changes
	
	
	return 0;
	
	
	
}
