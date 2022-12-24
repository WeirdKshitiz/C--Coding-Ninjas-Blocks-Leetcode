#include <iostream>
using namespace std;
int mult(int m,int n){
    if(n==0){
        return 0;
    }
    int a=mult(m,n-1);
    return m+a;
}
int main(){
int m=3;
int n=6;
cout<<mult(m,n);
cout<<endl;
return 0;
}