#include <iostream>
 
using namespace std;
int hexaDecimalToDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size(); //ye .size function string mein defined hota hai
//ab hum loop lgayenge aakhri digit se pehli digit tk
for(int i=s-1;i>=0;i--){
   // s-1 denotes aakhri digit
   if(n[i]>='0' && n[i]<='9'){
    ans+=x*(n[i]-'0');
   }
   else if(n[i]>='A' && n[i]<='F'){
    ans+=x*(n[i]-'A'+10);
    //+10 because agar a hua n[i] to A-A to 0 aajayega
    //lekin mujhe a ki value 10 chahiye isliye add kiya
   }
   x*=16;
}
return ans;
}
int main(){
string n;
cin>>n;
cout<<hexaDecimalToDecimal(n)<<endl;
return 0;
}