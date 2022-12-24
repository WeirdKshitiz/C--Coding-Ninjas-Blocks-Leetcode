#include <iostream>
using namespace std;
int decimalToBinary(int n){
    int x=1; //base
    int ans=0;
    while(x<=n){
        x*=2;
    }
        //manlo x=8 and n=11
        // so x hmara 16 hojayega jo ki humein chahiye hi nhi isliye hum ise divide bhi kr denge
        x/=2;

        //ap hum ek loop lgayenge such that jb x>0
        //mtlb hum ek ek bit check kr rha hun binary mein
        while(x>0){

            int lastDigit=n/x;
            //n/x for getting the quotient and since we have taken int 
            //decimal part ignore hojayega
            n-=lastDigit*x;
            x/=2;
            ans=ans*10+lastDigit;
        }
        return ans;
    }


int main(){
int n;
cin>>n;
cout<<decimalToBinary(n)<<endl;
return 0;
}