#include <iostream>
using namespace std;
int countZeroes(int n){
   static int count=0;
    if(n>0){
        if(n%10==0){
            count++;
        }
        countZeroes(n/10);
    }
    return count;
}
int main(){
int n;
cin>>n;
cout<<countZeroes(n);
cout<<endl;
return 0;
}