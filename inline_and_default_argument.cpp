// #include <iostream>
// using namespace std;


// //inline arguments

// // inline int  max(int a,int b){
// //     return (a>b)?a:b;
// // }
// // int main(){
// // int a,b;
// // cin>>a>>b ;
// // int c=max(a,b);

// // int x,y;
// // x=12;
// // y=34;
// // int z=max(x,y);
// // return 0;
// // }




// //default arguments
// int sum(int a[],int size,int si){
//     int ans=0;
//     for(int i=si;i<size;i++){
//        ans+=a[i]; 
//     }
//     return ans;
// }

// int sum2(int a,int b,int c=0,int d=0){
//     //agar main isko sirf 2 values hi dunga to ye automatically c aur d ko 0 maan lega (jo ki uski default value hai)
//     return a+b+c+d;
// }
// int main(){
// int a[20];
// cout<<sum(a,20)<<endl;
// }