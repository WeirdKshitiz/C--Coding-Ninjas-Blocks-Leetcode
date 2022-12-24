#include <iostream>
using namespace std;
int fibN(int n){
    int t0=0;
    int t1=1;
    int nextTerm;
    for(int i=0;i<=n;i++){
        cout<<t0<<endl;
       nextTerm=t0+t1;
       t0=t1;
       t1=nextTerm; 
    }
    return nextTerm;
}
int main(){
int n;
cin>>n;

cout<<fibN(n)<<endl;
return 0;
}