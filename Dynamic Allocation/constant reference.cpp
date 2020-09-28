#include <iostream>
using namespace std;

int main() {
     //const int
     int const i2=10;
     const int i=10;     //not allowed=const int i;i=10;
//const ref from a non const int
int j=12;
const int &k=j;
//k++;//this is const path is const ,mem is not const but changes will reflect here also
j++;
cout<<k<<endl;
//const reference from a const int
int const j2=12;
int const &k2=j2;
j2++;
k2++;//both error

//ref from a const int
int const j3=123;
int &k3=j3;//error
k3++;


	return 0;
}
