// #include <iostream>
// using namespace std;
// int length(char input[]){
//     int count=0;
//     for(int i=0;input[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
// char name[100];
// cout<<"enter your name : ";
// cin>>name;
// name[4]='x';
// name[3]='d';
// name[1]='\0';
// cout<<"Name : "<<name<<endl;

// cout<<"Length :"<<length(name)<<endl;
// return 0;
// }


#include <iostream>
using namespace std;
int main(){

char input[100];
// cin>>input;
// cin.getline(input,100);
cin.getline(input,100,'o');
cout<<input<<endl;
cout<<endl;
return 0;
}