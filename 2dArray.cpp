#include <iostream>
using namespace std;
int main(){
int a[100][100];
int m,n;
//m is rows
//n is columns
cin>>m>>n;
//input of array
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    cin>>a[i][j];
}
}

// output of array using row wise
cout<<"row-wise"<<endl;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
   cout<<a[i][j]<<" ";
}
cout<<endl;
}
   
//output of array using column wise
cout<<"column-wise"<<endl;
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}