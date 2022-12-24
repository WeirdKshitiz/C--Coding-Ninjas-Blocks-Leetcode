#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
char ch1,ch2,ch3;
ch1='X';
ch2='O';
int left=0;
int right=m-1;
int top=0;
int bottom=n-1;
int count=0;
while(left<=right && top<=bottom){
    if(count%2==0){
ch3=ch1;
    }
    else{
        ch3=ch2;
    }
    
    for(int i=left;i<=right;i++){
        cout<<ch3<<" ";
    }
    top++;
        for(int i=top;i<=bottom;i++){
        cout<<ch3<<" ";
    }
   right--;
   if(left<=right){
    for(int i=right;i>=left;i--){
        cout<<ch3<<" ";
    }
    bottom--;
   }
     if(top<=bottom){
    for(int i=bottom;i>=top;i--){
        cout<<ch3<<" ";
    }
    left++;
   }
  count++;
}
return 0;
}