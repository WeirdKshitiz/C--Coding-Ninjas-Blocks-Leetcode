#include <iostream>
using namespace std;


void selection(int arr[],int n){
    for(int i=0;i<n;i++){
//find the min element
int min=arr[i];
int minIndex=i;
for(int j=i;j<n;j++){
    if(arr[j]<min){
        min=arr[j];
        minIndex=j;
    }
}
//swap
int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;
}
}

int main(){
int arr[]={5,4,3,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
selection(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}