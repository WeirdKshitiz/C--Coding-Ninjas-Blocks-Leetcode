#include <iostream>
using namespace std;
char *removeSpaces(char *str){
    int i=0;
    int j=0;
    while(str[i]){
        if(str[i]!=' ')
        str[j++]=str[i];
        i++;
    }
    str[j]=' ';
    return str;
}
int main(){
char str1[]="gee k ";
cout<<removeSpaces(str1);

cout<<endl;
return 0;
}