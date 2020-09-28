#include <iostream>
using namespace std;
int sum(int a[],int size,int si=0){//default value si
     int ans=0;
     for(int i=si;i<size;i++){
          ans+=a[i];
     }
     return ans;
}
int sum2(int a,int b,int c=0,int d=0 ){
  return a+b+c+d;
}
int main() {
	// your code goes here
	int a[20];
	cout<<sum(a,20)<<endl;//for 2  arg
	
	
	return 0;
	
	
}
