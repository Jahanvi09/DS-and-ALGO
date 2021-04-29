#include<climits>
#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
const int N=1e6+2;
int *idx=new int [N];
for(int i=0;i<N;i++){
    idx[i]=-1;
}

int mindx=INT_MAX;
for(int i=0;i<n;i++){
    if(idx[arr[i]]!=-1){
        mindx=min(mindx,idx[arr[i]]);
    }
    else{
        idx[arr[i]]=i;
    }

}
if(mindx==-1){
    cout<<"-1"<<endl;
}
else
cout<<mindx+1<<endl;

}