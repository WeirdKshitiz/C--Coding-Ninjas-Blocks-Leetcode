#include <iostream>
using namespace std;
void arrayIntersect(int arrA[],int arrB[],int n,int k){
    for(int i=0;i<n;i++){
    cin>>arrA[i];
}
for(int j=0;j<n;j++){
    cin>>arrB[j];
}
for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
        if(arrA[i]==arrB[j]){
            cout<<arrA[i]<<" ";
        }
    }
}
}
int main(){
int n; //range of arr1
cin>>n;
int k;
cin>>k; //range of arr2
int arrA[n];
int arrB[k];

arrayIntersect(arrA,arrB,n,k);

}