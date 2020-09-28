#include <iostream>
using namespace std;
 #define PI 3.14
 int a;//global variables
 void g()
 {
      a++;
      cout<<a<<endl;
 }
 void f(){
      cout<<a<<endl;
      a++;
      g();
 }
int main() {
	// your code goes here
	int r;
	cin>>r;
	
	cout<<PI*r*r<<endl;
	
	//global variables
	int a=10;
	f();
	cout<<a<<endl;
	
	return 0;
}
