#include <iostream>
using namespace std;
void findUnique(int arr[],int n){
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    int flag=0;
    for(int j=0;j<n;j++){
        if (i!=j)
            {
        if(arr[j]==arr[i]){
            flag=1;
        }
            }
      
    }
    if(flag==0){
        cout<<arr[i]<<endl;
    }
}


}
int main(){

int n;
cin>>n;
int arr[n];

findUnique(arr,n);


}