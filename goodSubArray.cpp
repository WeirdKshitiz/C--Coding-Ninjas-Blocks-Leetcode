#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
for(int i=0;i<n;i++){
   int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        if(sum%n==0){
            cout<<"Yes";
            count++;
        }
        else{
            cout<<"No";
        }
    }
    cout<<endl;
    
}
cout<<"TOTAL NUMBER OF GOOD SUBARRAYS"<<count<<endl;
return 0;
}