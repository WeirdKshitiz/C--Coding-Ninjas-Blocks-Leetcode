#include <iostream>
using namespace std;
void replaceCharacter(char input[],char c1,char c2){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]==c1){
        input[0]=c2;
    }
    return replaceCharacter(input+1,c1,c2);
}
int main(){
char str[]="abacd";
char c1='a';
char c2='x';
cout<<"before replacing the character " ;
cout<<str<<endl;
replaceCharacter(str,c1,c2);
cout<<"before replacing the character ";
cout<<str;
return 0;
}

