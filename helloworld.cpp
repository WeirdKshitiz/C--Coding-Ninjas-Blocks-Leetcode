#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[10000]={0};
a[2]=1;
for(int i=3;i<=n;i+=2){
    a[i]=1;
}
for(int i=3;i*i<=n;i+=2){
    if(a[i]==1){
        for(int j=i*i;j<=n;j+=i){
a[j]=0;
        }
    }
}
for(int i=0;i<=n;i++){
    if(a[i]!=0){
        cout<<i<<" ";
    }
}
cout<<endl;
return 0;
}