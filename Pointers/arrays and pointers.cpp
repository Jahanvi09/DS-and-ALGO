#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[10];
	cout<<a<<endl;  
	cout<<&a[0]<<endl;//same address for both a and a0
	a[1]=10;
	a[0]=5;
	cout<<*a<<endl;//gives 5 0th element is always *a
	cout<<*(a+1)<<endl;
	
	int*p=&a[0];
	cout<<a<<endl;
	cout<<p<<endl;//both prints same address
	
	cout<<&p<<endl;//diff address stored at any  other space
	cout<<&a<<endl;//a and a0 address same
	
	cout<<sizeof(p)<<endl;// 8 pointer
	cout<<sizeof(a)<<endl;//40 array<T, N> ;
	
	p=p+1;//pointer
	a=a+1;//array type not assigned ,cant be resigned, no other diff memory,can store in other var like p=a+1;
	
	a++;//not allowed
	
	
	
	
	return 0;
}
