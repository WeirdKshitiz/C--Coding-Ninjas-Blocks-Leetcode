#include <iostream>
using namespace std;
bool isDuplicate(int n){
    int arr[n];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==arr[i]){
                return true;
                break;
            }
        }
        
    }
    return false;
}
int main(){
int n;
cin>>n;
if(isDuplicate(n)){
cout<<"duplicate hai!!";
}
else{
    cout<<"nhi hai yr";
}

return 0;
}