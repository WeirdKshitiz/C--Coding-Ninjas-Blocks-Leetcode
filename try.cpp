#include <iostream>
using namespace std;
int main(){
char a;
cin>>a;
int r=a;
if(r>='a'&& r<='z'){
    cout<<"lowercase"<<endl;
}
else if(r>='A'&&r>='Z'){
    cout<<"uppercase"<<endl;
}
else{
    cout<<"Invalid"<<endl;
}
cout<<endl;
return 0;
}