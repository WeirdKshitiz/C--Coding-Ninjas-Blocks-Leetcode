#include <iostream>
using namespace std;

int main(){
    int p,t;
    float r;
    cin>>p>>t;
      float si;
    if(p<=10000){
 r=0.1;
    }
    else {
        r=0.15;
    }
    si=(p*r*t)/100;
   cout<<si<<endl;
}