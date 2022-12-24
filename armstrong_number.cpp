#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
int original=n;
while(original>0){
	count++;
	original=original/10;
}
int sum=0;
int original2=n;
while(original2>0){
int lastDigit=original2%10;
int cube=pow(lastDigit,count);
sum+=cube;
original2=original2/10;
}

if(sum==n){
    cout<<"true"<<endl;
}
else{
   cout<< "false"<<endl;
}
return 0;
}