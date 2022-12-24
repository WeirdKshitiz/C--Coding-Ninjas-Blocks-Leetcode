#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int x,int low,int high){
     for(int i=0;i<size;i++){
  while(low<=high){
int mid=low+(high-low)/2;
  

  if(arr[mid]==x){
    // cout<<arr[i];
    return mid;

  }
if(arr[mid]<x){
    low=mid+1;
}
else{
    high=mid-1;
}

  }
   
}
return -1;
}
int main(){
int arr[]={1,3,4,5,7};
int size=sizeof(arr)/sizeof(arr[0]);
int x;
cin>>x;
// int result=binarySearch(arr,size,x,0,size-1);
// if(result==-1){
//     cout<<"element not found";
// }
// else{
//     cout<<"mil gya jhadiyon mein";
// }
cout<<binarySearch(arr,size,x,0,size-1);
return 0;
}