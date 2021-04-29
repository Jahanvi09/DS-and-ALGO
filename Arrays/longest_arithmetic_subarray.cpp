#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd=arr[1]-arr[0];
    int curr=2;//bcoz already 2 arr we are having
    int ans=2;
    int j=2;//coz first two are done

    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            curr=2;
            pd=arr[j]-arr[j-1];
        }
        ans=max(ans,curr);
        j++;
    }
cout<<ans<<endl;
}