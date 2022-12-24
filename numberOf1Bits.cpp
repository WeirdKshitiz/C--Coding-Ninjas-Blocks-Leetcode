#include <iostream>
using namespace std;


//An unsigned integer is a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295]. The signed integer is represented in twos complement notation. The most significant byte is 0 and the least significant is 3.
int numOfBits(unsigned int a){
    int count=0;
while(a!=0){
a=a&(a-1);
count++;
}
return count;
}
int main(){
int a;
cin>>a;
cout<<numOfBits(a);
cout<<endl;
return 0;
}