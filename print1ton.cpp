#include <iostream>
using namespace std;
int printN(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    
}
int main(){
int n;
cin>>n;
printN(n);
return 0;
}