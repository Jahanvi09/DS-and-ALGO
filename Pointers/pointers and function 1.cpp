#include <iostream>
using namespace std;
void print(int*p){
     cout<<*p<<endl;
}

void incrementPointer(int *p){
     p=p+1;
}
void increment(int *p){
     (*p)++;
}
int main() {
	// your code goes here
int i=10;
int *p=&i;
print(p);//prints 10
cout<<p<<endl;
 incrementPointer(p);//pass by value
	cout<<p<<endl;//both will  print same value

cout<<*p<<endl;
increment(p);
cout<<*p<<endl;//change its value ,both have same value from wherever you go it will have changes


	
	
	
	
	
	
	
	
	return 0;
}
