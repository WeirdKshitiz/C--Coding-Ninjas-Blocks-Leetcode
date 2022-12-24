#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int input[100];
for(int i=0;i<n;i++){
cin>>input[i];
}
for(int i=0;i<n;i++){
    sum+=input[i];
}
cout<<sum<<endl;
return 0;
}