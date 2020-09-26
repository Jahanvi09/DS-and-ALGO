#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i;
	cout<<i<<endl;//prints 0 as garbage value
	i++;
	cout<< i<<endl;// inc by 1 in garbage value
	
	int*p=0;//gives segmentation fault bcoz memeory dooesnt exist  that we trying to access//int *p;->may or may not gives you value mentioned below
	cout<<p<<endl;//prints garbage address
	cout<<*p<<endl;//accessing address of garbage value is a bigger garbage
	(*p)++;
	cout<<*p<<endl;//dangerous garbage changes
	
	return 0;
}
