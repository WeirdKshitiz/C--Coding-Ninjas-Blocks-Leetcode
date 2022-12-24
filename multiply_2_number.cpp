#include <iostream>
using namespace std;
int multiply(int n,int m){
int ans=n*m;
return ans;
}
int main(){
int n,m;
cin>>n>>m;

cout<<multiply(n,m);
return 0;
}