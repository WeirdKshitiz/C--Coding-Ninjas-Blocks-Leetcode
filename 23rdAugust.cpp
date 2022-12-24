
//X^N 
// #include <iostream>
// #include <cmath>
// using namespace std;
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     if(x==0){
//         return 0;
//     }
//     return x*pow(x,n-1);
// }
// int main(){
// int x,n;
// cin>>x>>n;

// cout<<power(x,n)<<endl;
// return 0;
// }




//search an element in the array
// #include <iostream>
// using namespace std;

// int search(int arr[],int size,int x){
//     if(size<0){
//         return -1;
//     }
//     if(arr[size]==x){
//         return size;
//     }
  
//     return search(arr,size-1,x);
// }
// int main(){
// int arr[]={1,3,5,10,11};
// int size=sizeof(arr)/sizeof(arr[0]);
// int x=11;
// cout<<search(arr,size,x);
// return 0;
// }




//2048
//TWO ZERO FOUR EIGHT
// #include <iostream>
// using namespace std;
// void print(string s[],int arr[],int size){
//     if(size<=0){
//         return;
//     }
//     cout<<s[arr[0]]<<" ";
//     print(s,arr+1,size-1);
// }
// int main(){
// string s[]={"zero","one","two","three","four","five","six","seven","eight"};
// int arr[]={2,0,4,8};
// int size=sizeof(arr)/sizeof(arr[0]);
// print(s,arr,size);
// cout<<endl;
// return 0;
// }





//first and last index of 7
// #include <iostream>
// using namespace std;
// int checkTheElement(int arr[],int size,int x){
// if(size<=0){
//     return -1;
// }
// if(arr[size]==x){
//     return 1;
// }
// return checkTheElement(arr,size-1,x);
// }

// // int firstIndex(int arr[],int size,int x,int index){
// //     if(arr[index]==x){
// //         return index;
// //     }
// //     return firstIndex(arr,size-1,x,index+1);
// // }

// void allIndex(int arr[],int size,int x,int index){
//     if(size <= 0)
//     {
//         return;
//     }
// if(arr[index]==x){
//     cout<<index<<endl; 
// }
//  allIndex(arr,size-1,x,index+1);
// }


// int lastIndex(int arr[],int size,int x,int index){
//     if(arr[0]==x){
//         return index;
//     }
//     return lastIndex(arr-1,size+1,x,index-1);
// }
// int main(){
// int arr[]={1,3,3,5,6,7,3,8};
// int size=sizeof(arr)/sizeof(arr[0]);
// int x=5;

// if(checkTheElement(arr,size,x)==1){
// // cout<<"True"<<endl;
// // cout<<firstIndex(arr,size,x,0)<<endl;
// cout<<lastIndex(arr+size-1,1,x,size-1);
// // allIndex(arr,size,x,0);
// }


// else{
//     cout<<"False"<<endl;
// }

// return 0;
// }







//sort 0,1,2 using recursion

















//bubble sort

#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    if(n==1){
        return;
    }
    int count=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            count++;
        }
    }
    if(count==0){
        return;
    }
    bubbleSort(arr,n-1);
}    
void printSortedArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[]={64,34,25,12,22,11,90};
int n=sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);
printSortedArray(arr,n);
cout<<endl;
return 0;
}





















//binary search
// #include <iostream>
// using namespace std;
// void binarySearch(int arr[],int x,int first,int last){
// int mid;
// if(first>last){
//     cout<<"Number not found";
//     return ;
// }
// else{
//     mid=(first+last)/2;

// if(arr[mid]==x){
// cout<<"element found at index "<<mid<<endl;
// return ;

// }
// else if(arr[mid]<x){
//     binarySearch(arr,x,mid+1,last);
// }
// else{
//     binarySearch(arr,x,first,mid-1);
// }
// }
// }

// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int x;
// cin>>x;
// binarySearch(arr,x,0,n-1);
// return 0;
// }