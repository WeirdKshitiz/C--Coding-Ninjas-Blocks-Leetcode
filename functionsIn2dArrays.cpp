#include <iostream>
using namespace std;
// void printArray(int a[][100],int m,int n){
//     //m mein hum rows ko receive kr rhe hain
//  //n mein hum columns ko receive kr rhe hain

//  // output of array using row wise

// for(int i=0;i<m;i++){
// for(int j=0;j<n;j++){
//    cout<<a[i][j]<<" ";
// }
// cout<<endl;
// }
// }


void printArray(int a[][5],int m,int n){
    //m mein hum rows ko receive kr rhe hain
 //n mein hum columns ko receive kr rhe hain

 // output of array using row wise

for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
   cout<<a[i][j]<<" ";
}
cout<<endl;
}
}










// int main(){
// int a[100][100];
// int m,n;
// //m is rows
// //n is columns
// cin>>m>>n;
// //input of array
// for(int i=0;i<m;i++){
// for(int j=0;j<n;j++){
//     cin>>a[i][j];
// }
// }



















// printArray(a,m,n);

// output of array using row wise
// cout<<"row-wise"<<endl;
// for(int i=0;i<m;i++){
// for(int j=0;j<n;j++){
//    cout<<a[i][j]<<" ";
// }
// cout<<endl;
// }
   
// //output of array using column wise
// cout<<"column-wise"<<endl;
// for(int j=0;j<n;j++){
//     for(int i=0;i<m;i++){
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

int main(){
    int a[][5]={{1,2},{3,4}};
    printArray(a,2,5);
}