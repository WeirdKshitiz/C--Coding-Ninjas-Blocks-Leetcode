#include <iostream>
using namespace std;
void printArray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
    cout<<endl;
}
void increment(int a,int b[],int n){
    //n is size of array
    
    for(int i=0;i<n;i++){ 
        b[i]=b[i]+1;
    }
    a++;
   
}
int main(){
    int a=10;
    int b[10]={1,2,3};
    increment(a,b,10);
    cout<<"a :"<<a<<endl;
    cout<<"b[0]: "<<b[0]<<endl;
// int input[100]={1,2,3};
// printArray(input,100);
return 0;
}