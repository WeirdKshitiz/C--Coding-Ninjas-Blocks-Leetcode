#include <iostream>
using namespace std;
void compress(string str,int n){
for(int i=0;i<n;i++){
    int count=1;
    while(i<n-1 && str[i]=str[i+1]){
        count++;
        i++;
    }
    if(count==0){
        cout<<str[i];
    }
    else{
        cout<<str[i]<<count;
    }
}
}
int main(){
string str;
cin>>str;
int n=str.length();
compress(str,n);
cout<<endl;
return 0;
}