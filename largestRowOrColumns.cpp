#include <iostream>
#include <string>
using namespace std;
int main(){

int m,n,sum1,sum2,x=0;
int max=INT_MIN;
string s = "";
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

for(int i=0;i<m;i++){
    sum1=0;
    for(int j=0;j<n;j++){ 
        sum1+=a[i][j];      
    }
     if(sum1>max){
        max=sum1;
        x=i;
        s="row";
     }
}



for(int i=0;i<n;i++){
    sum2=0;
for(int j=0;j<m;j++){
    sum2+=a[j][i];
}
   if(sum2>max){
    max=sum2;
    x=i;
    s="column";
   }

}
cout<<s<<" "<<x<<" "<<max;

return 0;
}