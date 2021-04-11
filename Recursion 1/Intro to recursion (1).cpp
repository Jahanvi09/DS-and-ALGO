#include <iostream>
using namespace std;

int factorial(int n){
     cout<<n<<endl;
     if(n==0)
     return 1;//base case
     int smallOutput=factorial(n-1);
     return n*smallOutput;
}
//using recursion and PMI
int factorial1(int n){
     if(n==0)
     return 1;//
     
     int smallOutput=factorial1(n-1);
     int output=n*smallOutput;
     return output;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int output=factorial(n);//segmentation fault without base case
	cout<<output<<endl;
	
	
	cout<<factorial1(4)<<endl;
	return 0;
}
