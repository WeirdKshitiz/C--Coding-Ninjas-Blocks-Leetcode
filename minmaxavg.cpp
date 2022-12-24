#include <iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    cin>>n;
    int a;
     int sum=0;
    int small=INT_MAX;
    int largest=INT_MIN;
while(i<n){
   
    cin>>a;
    if(a<small){
        small=a;
    }
    else if(a>largest){
        largest=a;
    }
    sum+=a;
    i++;
}
int avg=sum/n;
cout<<avg<<endl;
cout<<small<<endl;
cout<<largest<<endl;

}