#include <iostream>
using namespace std;


void pairSum(int arr[],int n){
int sum;
cin>>sum;
int count=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low=0;
int high=n-1;

while(low<high){
    if(arr[low]+arr[high]>sum){
        high--;
    }
    else if(arr[low]+arr[high]<sum){
        low++;
    }
    else if(arr[low]+arr[high]==sum){
        cout<<"Pair"<<arr[low]<<" "<<arr[high]<<" "<<endl;
        count++;
        low++;
        high--;
       
    }
    
}
    cout<<"total number of pairs following this property are : "<<count;
}




int main(){
int n;
cin>>n;

int arr[n];
pairSum(arr,n);

return 0;
}