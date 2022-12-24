#include <iostream>
#include <cmath>
using namespace std;

int no_of_digits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
return count;
}


bool compare(int a,int b){
    return a*pow(10,no_of_digits(b))+b>b*pow(10,no_of_digits(a));
    //ye true ya false return kregi
}



void printa(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int arr[]={321,4532,67,234,89,34};
int n=sizeof(arr)/ sizeof(int);
sort(arr,arr+n,compare);
printa(arr,n);
cout<<endl;
return 0;
}