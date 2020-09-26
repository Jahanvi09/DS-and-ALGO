#include <iostream>
using namespace std;
void increment(int**p){
     p=p+1;//no change goes double pointer
}
void increment2(int**p){
     *p=*p+1;//change
}
void increment3(int **p){
     **p=**p+1;//change address pr jaakr change kr rhe h
}
int main() {
	// your code goes here
	int i=10;
	int*p=&i;
	int **p2=&p;
	
	cout<<p2<<endl;//same addre
	cout<<&p<<endl;//both same address

	cout<<p<<endl;
	cout<<*p2<<endl;//both print same address of i
	cout<<&i<<endl;//three same
	
	cout<<i<<endl;
	cout<<*p<<endl;
	cout<<**p2<<endl;//three same 10
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
