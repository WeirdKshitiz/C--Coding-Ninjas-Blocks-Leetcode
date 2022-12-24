#include <iostream>
using namespace std;
int main(){
int n,x;

cin>>n;
cin>>x;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
    if(arr[i]==x){
        cout<<i<<endl;
        break;
    }
}

cout<<endl;
return 0;
}