#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
break;
//is se hum apne j wale loop se bahar aa jayenge
            }
        }
        arr[j+1]=current;
    }
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
cin>>arr[i];
}
insertionSort(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}
cout<<endl; 
return 0;
}