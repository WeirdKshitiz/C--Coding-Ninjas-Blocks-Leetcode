#include <iostream>
using namespace std;
int main(){
 int x=0,y=0;
 char ch;
cin>>ch;
 while(ch!='$'){
    
    if(ch=='N'){
        y++;
    }
    else if(ch=='S'){
        y--;
    }
    else if(ch=='E'){
        x++;
    }
else if(ch=='W'){
    x--;
}
cin>>ch;
 }
// cout<<x<<" "<<y<<endl;
while(x>0){
    cout<<'E';
    x--;

}
while(y>0){
    cout<<'N';
    y--;
}
while(y<0){
    cout<<'S';
    y++;
}
while(x<0){
    cout<<'W';
    x++;
}
return 0;
}