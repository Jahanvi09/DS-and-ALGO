#include <iostream>
using namespace std;
int sum(int a[],int size)//can pass *a instead of a[//getting as a pointer get size 8
{int ans=0;
for(int i=0;i<size;i++){
     ans+=a[i];
}
return ans;
 cout<<sizeof(a)<<endl;    
}

int main() {
	// your code goes here
	int a[10];
	cout<<sum(a,10)<<endl;//passed as a array get size 40
	 cout<<sum(a+3,7)<<endl;
	 
	 cout<<sizeof(a)<<endl;
	
	
	
	return 0;
}
