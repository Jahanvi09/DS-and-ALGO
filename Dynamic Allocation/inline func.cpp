#include <iostream>
using namespace std;

inline int max(int a,int b){//readable performance
     return (a>b)?a:b;
}

int max(int a,int b){//readability improved
     return (a>b)?a:b;
}
int main() {
	// your code goes here

     int a,b;
     cin>>a>>b;
     int c=max(a,b);
    /* int c=(a>b)?a:b;//tertiary operator
    int x,y;
    x=12;
    y=56;
    int z=(x>y)?x:y;
    */
     int x,y;
    x=12;
    y=56;
    int z=max(a,b);
     
     
     /*if(a>b){
     c=a;
          
     }
     else{
     c=b;
}*/






	return 0;
}
