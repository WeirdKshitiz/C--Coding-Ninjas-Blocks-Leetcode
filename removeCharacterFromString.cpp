#include <iostream>
using namespace std;
int main(){
string str;
cin>>str;

char c;
cin>>c;

string newstr="";
for(int i=0;i<str.length();i++){
    if(str[i]!=c){
        newstr+=string(1,str[i]);
    }
}
cout<<"converted string is : "<<newstr;
return 0;
}

