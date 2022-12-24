#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
while(n){
    sum+=n&1;
    n=n>>1;
}
cout<<sum<<endl;
return 0;
}