#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int maxsum=INT_MIN;
    for(int i=0;i<=n;i++){
         for(int j=i;j<n;j++){
             int sum=0;
             for(int k=i;k<=j;k++){
               sum+=arr[k];
                //cout<<arr[k]<<" ";
             }
             //cout<<endl;
             maxsum=max(maxsum,sum);
         }
    }
    cout<<maxsum;
    return 0;
}