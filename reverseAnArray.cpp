#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int max=INT_MIN;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
    if(arr[i]>max){
        max=arr[i];
    }
    
}
cout<<"max number is"<<max<<endl;

return 0;
}


; 