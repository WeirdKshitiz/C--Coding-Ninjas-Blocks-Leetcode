#include <iostream>
#include <cstring>
using namespace std;
string moveAllStringToEnd(string s){

if(s.length()==1){
return s;
}

//recursive case

string cc=s.substr(0,1);
string cs=s.substr(1);
if(cc=="x"){
return moveAllStringToEnd(cs)+cc;
}
else{
return cc+moveAllStringToEnd(cs);
}
}
int main(){
string s="abxxbsxcxxxbx";
cout<<moveAllStringToEnd(s)<<endl;
return 0;
}