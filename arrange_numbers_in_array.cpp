#include <iostream>
using namespace std;
void arrangeNumbers(int arr[],int n){

    
int dir=0;
    int i=0,j=n-1;
    int count=1;
    while(i<=j)
    {
        if(dir==0)
        {arr[i]=count;
        
        dir=1;
        i++;}
        else{
            dir=0;
            arr[j]=count;  
            
            j--;
        }
        count++;
    }
    
    // cout<<arr[n]<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
arrangeNumbers(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}