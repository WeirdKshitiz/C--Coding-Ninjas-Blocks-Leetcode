#include <iostream>
using namespace std;
void sort01(int arr[],int n){

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int left;
int right;
left=0;
right=n-1;
while(left<right){
//    left=0
    while(arr[left]%2==0 && left<right){
        left++;
    }
    // if right=1 
    while(arr[right]%2==1 && right>left){
        right--;
    }
    
    if(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}


}
int main(){
int n;
cin>>n;
int arr[n];
sort01(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}