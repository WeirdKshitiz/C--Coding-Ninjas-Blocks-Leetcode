#include <iostream>
using namespace std;
bool isPresent(int arr[],int n,int elem){
for(int i=0;i<=n;i++){
if(arr[i]==elem){
    return true;
    break;
}


}
return false;
}
int main(){
int n;
cin>>n;
int arr[n];
int elem;
cin>>elem;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
if(isPresent(arr,n,elem)){
cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

return 0;
}