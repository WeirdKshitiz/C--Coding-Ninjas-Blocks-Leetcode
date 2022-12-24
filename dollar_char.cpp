#include <iostream>
using namespace std;
int main(){
char ch;

int numberOfChar=0;
//cin>>ch;
 cin.get(ch); //TAKING THE INITIALIZE VALUE

while(ch!='$'){

    numberOfChar++;
    //cin>>ch;
    cin.get(ch); //INITIALIZING THE VALUE
    }
cout<<numberOfChar;
return 0;
}
