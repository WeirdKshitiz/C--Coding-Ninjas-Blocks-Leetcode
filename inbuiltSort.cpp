#include <iostream>
using namespace std;
int main(){

int arr[5]={1,3,2,6,5};
//by default sort function
sort(arr,arr+5);
cout<<"using inbuilt sort function"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
//if we want to arrange the sorted array in decreasing order
sort(arr,arr+5,greater<int>());
  cout<<"uisng inbuilt sort function in ddecreasing order"<<endl;
for(int i=0;i<5;i++){
  
    cout<<arr[i]<<endl;
}

cout<<endl;
return 0;
}