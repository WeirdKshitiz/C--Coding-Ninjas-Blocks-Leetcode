#include <iostream>
using namespace std;
int main(){
float a;
float b;
cin>>a>>b;
char op;
cin>>op;
switch (op)
{
case '+':
   cout<<a+b<<endl;
    break;
case '-':
   cout<<a-b<<endl;
    break;
    case '*':
   cout<<a*b<<endl;
    break;
    case '/':
   cout<<a/b<<endl;
    break;
default:
cout<<"enter another operator bro!"<<endl;
    break;
}
return 0;
}