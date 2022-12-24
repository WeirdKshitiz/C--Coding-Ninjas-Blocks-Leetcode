#include <iostream>
#include <cmath>
using namespace std;
void printArray(int input[]){
    cout<<"function"<<sizeof(input)<<endl;
// for(int i=0;i<sizeof(input))
}
int main(){
int n;
cin>>n;
int input[100];
cout<<input<<endl;
for(int i=0;i<n;i++){
    cin>>input[i];
}
cout<<"main"<<sizeof(input)<<endl;
printArray(input);
return 0;
}