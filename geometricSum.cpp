#include <iostream>
#include <cmath>
using namespace std;
double geometricSum(int k){
    if(k==0){
        return 1;
    }
    double ans=1/(double)pow(2,k);
    double finale=ans+geometricSum(k-1);
return finale;
}
int main(){
int k;
cin>>k;
cout<<geometricSum(k)<<endl;
return 0;
}