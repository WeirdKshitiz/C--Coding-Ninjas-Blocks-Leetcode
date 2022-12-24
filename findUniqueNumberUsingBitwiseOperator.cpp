#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,5,3,3};
    int n=5;
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
cout<<ans<<endl;
return 0;
}
