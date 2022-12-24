#include <iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(target==arr[mid]){
        return mid;
    }
    else if(target<arr[mid]){
        return binarySearch(arr,low,mid-1,target);
    }
    else{
        return binarySearch(arr,mid+1,high,target);
    }
}
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int low=0;
int high=n-1;
int target=4;
cout<<binarySearch(arr,low,high,target);
cout<<endl;
return 0;
}