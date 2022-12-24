#include <iostream>
#include <climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int min,max;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
     min=arr[0];
 max=arr[0];
    if(arr[i]>max){
        max=arr[i];
    }
    else if(arr[i]<min){
        min=arr[i];
    }
   
}
 cout<<max<<" "<<min<<endl;
return 0;
}