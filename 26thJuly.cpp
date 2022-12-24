#include <iostream>
using namespace std;




// question:sort all zeroes in the array





//using O(N^2)
// int main(){

// int arr[]={3,1,4,0,8,0,10,11};
// int n=sizeof(arr)/sizeof(int);
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-1;j++){
//         if(arr[j]==0){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }



//using O(N) Approach
// void moveZeroEnd(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[j],arr[i]);
//             j=j+1;
//         }
//     }
// }

// int main(){
//     int arr[]={3,1,4,0,8,0,10,11};
//     int n=sizeof(arr)/sizeof(int);
//     moveZeroEnd(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }


//factorial of a number using array
