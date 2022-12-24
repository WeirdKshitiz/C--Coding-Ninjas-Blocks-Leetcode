#include <iostream>
using namespace std;
int main(){

int m,n,sum=0;;
//m is rows
//n is columns
cin>>m>>n;
int a[m][n];
//input of array
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    cin>>a[i][j];
}
}

// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
       
//         sum+=a[i][j];
        
//     }
//      cout<<"row sum"<<sum<<" "<<endl;
//      sum=0;
// }






for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    sum+=a[j][i];
}
   cout<<"column sum"<<sum<<" "<<endl;
   sum=0;

}

return 0;
}