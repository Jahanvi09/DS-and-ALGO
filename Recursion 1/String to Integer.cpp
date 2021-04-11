/*Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567  */


#include<string.h>
int stringToNumber(char input[],int last) {
    // Write your code here
     int n=strlen(input);
    if(last==0)
        return input[last]-'0';
    
    
    int b=input[last]-'0';
    int a=stringToNumber(input,last-1);
    return a*10+b;
    
    
    
}

int stringToNumber(char input[]) {
    // Write your code here
    int n=strlen(input);
    return stringToNumber(input,n-1);
    
    
}


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
