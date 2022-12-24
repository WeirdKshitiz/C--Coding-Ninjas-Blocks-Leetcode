#include <iostream>
using namespace std;
int main(){
int savings;
cin>>savings;
if(savings>5000){
if(savings>10000){
    cout<<"road trip"<<endl;
}
else{
    cout<<"Shopping with neha"<<endl;
}
}
else if(savings>2000){
    cout<<"rashmi"<<endl;
}
else{
    cout<<"friends"<<endl;
}

return 0;
}