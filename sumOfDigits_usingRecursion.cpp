#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
 int smallAns=n%10;
 int largeAns=n/10;
 int finalAns=smallAns+sum(largeAns);
 return finalAns;
}
int main(){
int n;
cin>>n;

cout<<sum(n)<<endl;
return 0;
}