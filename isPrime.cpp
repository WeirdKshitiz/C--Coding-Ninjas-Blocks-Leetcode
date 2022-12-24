#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
      
    }
    return true;
}
int main(){
int n;
cin>>n;
bool ans =isPrime(n);
if(ans==0){
    cout<<"not prime";
}
else{
    cout<<"prime hai ji!";
}
return 0;
}