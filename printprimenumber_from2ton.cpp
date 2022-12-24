#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int x){
    
for(int i=2;i<x;i++){
    if(x%i==0){
        return false;
    }
    else {
        return true;
    }
}
//sreturn true;
}
int main(){
    int n;
    cin>>n;
for(int i=2;i<=n;i++){
    if(isPrime(i)){
        cout<<i<<"prime hai bhai";
    }
    else{
         cout<<i<<"prime nhi hai bhai";
    }   
}
cout<<endl;
return 0;
}