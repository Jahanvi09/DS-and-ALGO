#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int const i=10;
	int *p=&i;
	#include <iostream>
using namespace std;

void g(int const & a) {
	a++;
}

void f(const int * p) {
}

int main() {
	int const i = 10;

	int const * p = &i;

	int j = 12;
	int* p3 = &j;
	f(p3);
	g(j);

	int const * p2 = &j;
	cout << *p2 << endl;
	j++;
	cout << *p2 << endl;


int i = 10;
	int j = 21;
	int const * p = &i;

	p = &j;

	int * const p2 = &i;
	(*p2)++;
	//p2 = &j;


	int const * const p3 = &i;
	p3 = &j;
	(*p3)++;




}


	
	
	
	return 0;
}
