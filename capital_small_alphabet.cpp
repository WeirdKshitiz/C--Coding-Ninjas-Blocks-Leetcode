#include <iostream>
using namespace std;
int main(){
char ch;
cin>>ch;

if(ch>=65 && ch<=90){
    cout<<"char is UPPERCASE";
}
else if (ch>=97 && ch<=122){
    cout<<"char is lowercase";
}
else{
cout<<"out of world";
}

}