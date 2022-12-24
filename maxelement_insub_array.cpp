#include <iostream>
using namespace std;
void maxElement(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum>max){
             max=sum;
            }
        }
        
    }
    cout<<max;
   
}
int main(){
int n;
cin>>n;
int arr[n];
maxElement(arr,n);

cout<<endl;
return 0;
}