#include <iostream>
using namespace std;
// void reverse(string s,int i,int j){
//     if(i>j){
//         return;
//     }
//     swap(s[i],s[j]);
   
//     i++;
//     j--;
//     reverse(s,i,j);
// }



void reverse(string &s,int i,int size){
    if(i>size){
        return;
    }
    swap(s[i],s[size]);
    reverse(s,i+1,size-1);
}
int main(){
string s;
cin>>s;
int size=s.length()-1;

// reverse(s,0,size-1);
reverse(s,0,size);
cout<<s<<endl;

cout<<endl;
return 0;
}