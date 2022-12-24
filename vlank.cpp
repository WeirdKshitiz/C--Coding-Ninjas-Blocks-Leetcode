#include <iostream>
using namespace std;
void binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
       int y=n%10;
       ans+=x*y;
       x*=2;
       n/=10;
    }
    cout<<ans;
}
int main(){
int n;
cin>>n;
binaryToDecimal(n);
cout<<endl;
return 0;
}