#include <iostream>
using namespace std;
int singleNumber(int arr[],int n){
    int xorans=0;
    for(int i=0;i<n;i++){
xorans^=arr[i];
    }
    return xorans;
}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<singleNumber(arr,n);
cout<<endl;
return 0;
}