#include <iostream>
using namespace std;
bool binarySearch(int arr[],int start,int end,int key){

int mid=start+(end-start)/2;
    //base condition
    //element not found
    if(start>end){
        return false;
    }

    //if element found
    if(arr[mid]==key){
        return true;
    }

    if(key>arr[mid]){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}


int main(){
int arr[6]={2,4,5,6,7,8};
int size=6;
int key=2;
if(binarySearch(arr,0,5,key)){
    cout<<"element is present in the array";
}
else{
cout<<"element is not present in the array";
}
return 0;
}