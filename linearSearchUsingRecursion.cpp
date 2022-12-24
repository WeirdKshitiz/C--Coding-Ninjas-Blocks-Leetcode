#include <iostream>
using namespace std;
bool findElement(int arr[],int size,int ele){
    if(size==0){
        return false;
    }
    if(arr[0]==ele){
        return true;
    }
    else{
        int remainingPart=findElement(arr+1,size-1,ele);
        return remainingPart;
    }
}
int main(){
int arr[5]={1,2,3,4,5};
int size=5;
int ele=6;
if(findElement(arr,size,ele)){
    cout<<"Element is present!";
}
else{
    cout<<"Element is not present";
}
cout<<endl;
return 0;
}