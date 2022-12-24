#include <iostream>
using namespace std;
int trailingZeroes(int a){
    int count=0;
    while(a%2==0){
        a=a>>1;
        count++;
    }
    return count;
}
int main(){
int a;
cin>>a;
cout<<trailingZeroes(a);
cout<<endl;
return 0;
}