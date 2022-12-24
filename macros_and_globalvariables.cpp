#include <iostream>
using namespace std;
// #define PI 3.14
// int main(){
// int r;
// cin>>r;
// cout<<PI * r * r<<endl;








//GLOBAL VARIABLES
int a;
void g(){
    a++;
    cout<<a<<endl;

}
void f(){
cout<<a<<endl;
a++;
}
int main(){
    a=10;
    f();
    cout<<a<<endl;
return 0;
}