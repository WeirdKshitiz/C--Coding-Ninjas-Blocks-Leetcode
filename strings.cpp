#include <iostream>
using namespace std;
int main(){
// string s="abc";
// or
// string s;
// s1="def";

string s="abc";
getline(cin,s);
cout<<s<<endl;

string s1;
s1="def";
cout<<s1<<endl;
cout<<s<<endl;
s="defdef";
cout<<s[0]<<endl;
s[0]='a';

string s2=s+s1;
cout<<s2<<endl;

cout<<s2.size()<<endl;
cout<<s2.substr(3)<<endl;

cout<<s2.find("def");



return 0;
}