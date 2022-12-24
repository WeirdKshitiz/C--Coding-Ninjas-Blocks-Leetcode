#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        int check;
        check=i+j;
        if(check%2==0){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;
}
cout<<endl;
return 0;
}