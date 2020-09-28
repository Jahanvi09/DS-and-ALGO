#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int *p=new int;
	*p=10;
	  cout<<*p<<endl;
	  double *pd=new double;
	  char * c=new char;
	  int *pa=new int[50];//now space wastage  or largwer needed
	  int n;
	  cin>>n;
	  
	  int *pa2=new int[n];
	  for(int i=0;i<n;i++){
	       cin>>pa2;
	  }
	  
	  int max=-1
	  for(int i=0;i<n;i++){
	       if(max<a[i]){
	            max=a[i];//find max
	       }
	  }
	  cout<<max<<endl;
	  
	  
	  p=new int;
	  delete p;//single element 
	  
	  p=new int[1000];
	  delete []p;
	  /* for task manager 
	  while(true){
	       int *p=new int;
	  }
	       while(true){
	            int i=10;
	       }
	  */


	
	
	
	return 0;
}
