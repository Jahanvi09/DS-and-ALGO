#include <iostream>
using namespace std;

int main() {
	// your code goes here
/*	int**p=new int*[10];
	for(int i=0;i<10;i++){
	     p[i]=new int[20];
	  }*/
	  int m,n;
	  cin>>m>>n;
	  	int**p=new int*[m];
	for(int i=0;i<m;i++){
	     p[i]=new int[n];
	     //for staircase 2d array :p[i]=new int [i+1];
	    for(int j=0;j<n;j++){
	         cin>>p[i][j];
	    } 
	}
	for(int i=0;i<m;i++){ 
	     delete[]p[i];//rows
	}
	
	delete []p;
	
}
	
	
	
