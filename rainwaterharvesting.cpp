#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cin>>n;
int h[n];
for(int i=0;i<n;i++){
    cin>>h[i];
}
int lmax[n];
int rmax[n];
int sum=0;
lmax[0]=h[0];
rmax[n-1]=h[n-1];
for(int i=1;i<n;i++){
    lmax[i]=max(lmax[i],h[i-1]);
}
for(int i=n-2;i>=0;i--){
  rmax[i]=max(rmax[i],h[i+1]);
}
for(int i=0;i<n;i++){
    sum+=min(lmax[i],rmax[i])-h[i];
}
cout<<sum;

cout<<endl;
return 0;
}