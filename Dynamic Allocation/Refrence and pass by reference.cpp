#include <iostream>
using namespace std;

  void increment(int& i){//pass by ref 
       i++;//now ref changes bcoz sharing same mem
  }
  //bad practice
int f(int n){
     int a=n;
     return a;
}
  //bad practice
int *f2(){
     int i=10;
     return &i;

}
int main() {
	// your code goes here
	int i=10;// int i;//int i=10;   //int &j; j=i; not allowed  
	
	int &k1=f(i);
	
int *p=f2();	
	
	
	increment(i);
	 cout<<i<<endl;
	
	int&j=i;// if not & not given it will reflect no change in j when i++
	i++;
	 cout<<j<<endl;
	j++;
	 cout<<i<<endl;//both changes bcoz accessing same memory from two diff ways
	 
	 int k=100;
	 j=k;
	  cout<<i<<endl;//both i j will change to 100
	
	
	
	
	
	
	return 0;
}
