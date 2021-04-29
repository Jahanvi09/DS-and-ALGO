#include <iostream>
using namespace std;

void merge(int a[],int si,int ei){
     int size=ei-si+1; // finding size as same as for the output array
     int mid= (si+ei)/2;
     int *out=new int[size];//dynamically created output array
     int i=si;
     int j=mid+1;
     int k=0;//for output array
     while(i<=mid && j<=ei){//i goes till mid and j goes till ei
          if(a[i]<a[j]){ 
               out[k]=a[i];
               i++;
               k++;
          }
     
         else
          out[k]=a[j];
          j++;//here both i and j inc going from left to write
          k++;//putting in out array moving its pointer
     }
    
    while(i<=mid){// printing the ele which are left after comparison
         out[k]=a[i];
         i++;
         k++;
         
    }
    
    while(j<=ei){
         out[k]=a[j];
         j++;
         k++;
         
    }
    int m=0;
    for (int i=si;i<=ei;i++){// copying back the elements in the original array from output array
         a[i]=out[m];
         m++;
    }
    
    
   delete [] out; 
    
     
}

void merge_sort(int a[],int si,int ei){
if(si>=ei)// base case if present element is 1 
return;
 
    int mid=(si+ei)/2;// finding mid ele
     merge_sort(a,si,mid); // on 1st half
     merge_sort(a,mid+1,ei);//2nd one
     merge(a,si,ei);// then merge both the halves
     
}
int main() {
int a[]={6,5,4,3,2,1};
merge_sort(a,0,5);
for(int i=0;i<6;i++)
cout<<a[i]<<" ";
cout<<endl;

}