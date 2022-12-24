#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int temp;

for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<=n-2;i++){
bool flag=false;
    for(int j=0;j<=n-2-i;j++){
        if(arr[j]>arr[j+1]){
            flag=true;
            //1st approach
            // temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;

            //2nd approach

            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
            
        }
    }
    if(flag!=true)
        break;  
        cout<<"i =  "<<i<<endl;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}