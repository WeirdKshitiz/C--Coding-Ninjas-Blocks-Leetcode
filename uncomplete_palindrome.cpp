#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
for(int i=1;i<=n;i++){
    
    for( int j=1;j<=n-i;j++){
        cout<<" ";
    }
int k=i;
for(int j=i;j<=2*i-2;j++){
    cout<<k++<<" ";
}

for(int j=2*i-2;j<=2*i;j++){
    cout<<k--<<" ";
}



cout<<endl;
}
return 0;
}
