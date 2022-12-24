#include <iostream>
using namespace std;
int countStairWays(int n){
    if(n==1||n==0){
        return 1;
    }
   else if(n==2){
        return 2;
    }
    else{
        return countStairWays(n-3)+countStairWays(n-2)+ countStairWays(n-1);
    }
}
int main(){
int n;
cin>>n;
cout<<countStairWays(n);
cout<<endl;
return 0;
}