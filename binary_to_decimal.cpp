#include <iostream>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10; //value of 2^0
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main(){
int n;
cin>>n;
cout<<binaryToDecimal(n)<<endl;
return 0;
}