#include <iostream>
using namespace std;
int main(){
// int a=10;
// cout<<a<<endl;
// cout<<&a<<endl;
// int &b=a;
// cout<<b<<endl;
// cout<<&b<<endl;
// double d=10.23;
// float f=324.34;
// cout<<sizeof(a)<<endl;
// cout<<sizeof(d)<<endl;
// cout<<sizeof(f)<<endl;

// //chahe variable kitna bhi size le ,uska refererrence same hi size lega
// cout<<sizeof(&a)<<endl;
// cout<<sizeof(&d)<<endl;
// cout<<sizeof(&f)<<endl;


// int a=10;
// int *aptr;
// aptr=&a;
// cout<<&a<<endl;
// cout<<aptr<<endl;
// cout<<sizeof(aptr)<<endl;



// char ch1='a';
// cout<<&ch1<<endl;
// char ch2='b';
// cout<<&ch2<<endl;
// char ch3='c';
// cout<<&ch3<<endl;
// char ch4='U';
// cout<<&ch4<<endl;
// cout<<(int*) &ch4<<endl; //fooling of compiler
//ye ch4 ke address ko integer mein store krkre uske address ki value de rha hai
// cout<<(int)ch4<<endl;

// char ch5='a';
// char ch6='b';
// char ch7='c';
// // cout<<&ch5<<" "<<&ch6<<" "<<&ch7<<endl;
// int a=10;
// int *aptr=NULL;
// aptr=&a;
// cout<<(*aptr)<<endl;


int a[10]={3214,345,35,6,345,234,2345,234,23};
cout<<a<<endl;
cout<<*a<<endl;
cout<<a+1<<endl;
cout<<*(a+1)<<endl;
return 0;
}