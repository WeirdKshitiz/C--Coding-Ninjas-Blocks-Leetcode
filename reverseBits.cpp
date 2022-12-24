#include <iostream>
using namespace std;
int reverseBits(unsigned int A){
   unsigned int ans=0;
   int position=1;
 while(A!=0){
    if(A%2){
        ans=ans+(1<<(31-position));
    }
    A=A>>1;
 }
 return ans;
}
int main(){
int A;
cin>>A;
cout<<reverseBits(A);
cout<<endl;
return 0;
}