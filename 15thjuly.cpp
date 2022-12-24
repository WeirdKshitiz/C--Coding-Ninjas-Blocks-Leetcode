//array sum
// #include <iostream>
// using namespace std;
// void findSum(int arr[],int n,int sum){
   
//     for(int i=0;i<n;i++){
// sum+=arr[i];
//     }
//     cout<<sum;
// }
// int main(){
// int n;
// cin>>n;
//  int sum=0;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// findSum(arr,n,sum);
// cout<<endl;
// return 0;
// }

//linear search

// #include <iostream>
// using namespace std;
// void findX(int arr[],int n,int x){
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==x){
//             cout<<"element found at index"<<i<<endl;
//         }
//     }
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// int x;
// cin>>x;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// findX(arr,n,x);
// cout<<endl;
// return 0;
// }

//FIND UNIQUE and duplicate
// #include <iostream>
// using namespace std;
// void isUnique(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int flag=0;
//         for(int j=i+1;j<n;j++){
//             if(i!=j){
//             if(arr[i]==arr[j]){
//                 flag=1;  
//             }
           
//             }
//         }
//         if(flag==1){
//             cout<<arr[i]<<endl;
//         }
//     }
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];

// }
// isUnique(arr,n);
// cout<<endl;
// return 0;
// }


//array intersection
// #include <iostream>
// using namespace std;
// void arrayIntersect(int arrA[],int arrB[],int n,int k){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<k;j++){
//             if(arrA[i]==arrB[j]){
//                 cout<<arrA[i];
//             }
//         }
//     }
// }
// int main(){
// int n,k;
// cin>>n>>k;
// int arrA[n];
// int arrB[k];
// for(int i=0;i<n;i++){
//     cin>>arrA[i];
// }
// for(int j=0;j<n;j++){
//     cin>>arrB[j];
// }
// arrayIntersect(arrA,arrB,n,k);
// cout<<endl;
// return 0;
// }

//pairsum version1 
// #include <iostream>

// using namespace std;
// void pairSum(int arr[],int n,int x){
//     int count=0;
//     int low=0;
//     int high=n-1;
//     while(low<high){
//         if(arr[low]+arr[high]>x){
//             high--;
//         }
//        else if(arr[low]+arr[high]<x){
//             low++;
//         }
//         else if(arr[low]+arr[high]==x){
//             cout<<arr[low]<<","<<arr[high]<<endl;
//             high--;
//             low++;
//             count++;
//         }
//     }
//     cout<<"total number of pairsum are "<<count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     pairSum(arr,n,x);

//     return 0;
// }

//pairsum version 2
// #include <iostream>

// using namespace std;
// void pairSum(int arr[],int n,int x){
// for(int i=0;i<=n-1;i++){
//     for(int j=i+1;j<=n-1;j++){
//         if(i!=j){
//         if(arr[i]+arr[j]==x){
//             cout<<arr[i]<<arr[j]<<endl;
//         }
//         }
//     }
// }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     pairSum(arr,n,x);

//     return 0;
// }

//triplet sum
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <iostream>

// using namespace std;
// void tripletSum(int arr[],int n,int x){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//   int y=x-arr[i];
//   int low=i+1;
//   int high=n-1;
//   while(low<high){
//       if(arr[low]+arr[high]==y){
//           cout<<arr[i]<<arr[low]<<arr[high]<<endl;
//           high--;
//           low++;
//       }
//       else if(arr[low]+arr[high]>y){
//           high--;
//       }
//       else if(arr[low]+arr[high]<y){
//           low++;
//       }
       
//   }
// }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    tripletSum(arr,n,x);

//     return 0;
// }


//sort 0 1

#include <iostream>
using namespace std;
void sort(int arr[],int n){
    
        int left=0;
        int right=n-1;
        while(left<right){
            while(arr[left]%2==0 && left<right){
                left++;
            }
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
       for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}