/*Pair Star
Send Feedback
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a  */


// Change in the given string itself. So no need to return or print the changed string.
#include<string.h>
void pairStar(char input[],int start){
    int n=strlen(input);
    if(input[start]=='\0')
        return;
   
    
    if(input[start]==input[start+1]){
        input[n+1]='\0';
        int i;
        for(i=n-1;i>=start+1;i--){
            input[i+1]=input[i];
            
        }
        input[start+1]='*';
         
    }
     pairStar(input,start+1);
}
void pairStar(char input[]) {
    // Write your code here
	pairStar(input,0);
}


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
