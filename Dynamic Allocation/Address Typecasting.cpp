#include <iostream>
using namespace std;

int main() {
	// your code goes here
int i=65;
char c=i;//implicit
cout<<c<<endl;
 
 int*p=&i;//   gives error when tried implicitly
 char *pc=(char*)p;//explicit
 
  cout<<p<<endl;//address
  cout<<pc<<endl;//print till it finds  for null
 
 cout<<*p<<endl;//65
  cout<<*pc<<endl;//A
   cout<<*(pc+1)<<endl;//all 3 nul bcoz it is little endian they areeeee in reverse orderl 
    cout<<*(pc+2)<<endl;
     cout<<*(pc+3)<<endl;





	return 0;
}
