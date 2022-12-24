#include <iostream>
using namespace std;
int main(){

char button;
cout<<"Input daal de "<<endl;
cin>>button;
// if(button=='A'){
//     cout<<"hello"<<endl;
// }
// else if(button=='B'){
//     cout<<"Namaste"<<endl;
// }
// else if(button=='C'){
//     cout<<"Salut"<<endl;
// }
// else if(button=='D'){
//     cout<<"Hola"<<endl;
// }
// else if(button=='E'){
//     cout<<"Ciao"<<endl;
// }
// else{
//     cout<<"Im still learning more"<<endl;
// }

switch (button){
    case 'a':
    cout<<"hello"<<endl;
    break;
    case 'b':
    cout<<"Namaste"<<endl;
    break;
    case 'c':
    cout<<"Salut"<<endl;
    break;
    case 'd':
    cout<<"Hola"<<endl;
    break;
    case 'e':
    cout<<"Ciao"<<endl;
    break;

default:
    cout<<"I'm still learning more!"<<endl;
    break;
}
return 0;
}