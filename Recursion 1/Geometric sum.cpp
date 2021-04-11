/*Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.
Input format :
Integer k
Output format :
Geometric sum
Constraints :
0 <= k <= 1000
Sample Input 1 :
3
Sample Output 1 :
1.875
Sample Input 2 :
4
Sample Output 2 :
1.93750*/

double geometricSum(int k) {
    // Write your code here
if(k==0)
    return 0;
    
    int ans=pow(2,k);
   return  ((double)1/ans)+geometricSum(k-1);
    
    
}


#include <iostream>
#include <math.h>
#include <iomanip>
#include "solution.h"
using namespace std;

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
