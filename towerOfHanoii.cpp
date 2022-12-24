#include <iostream>
#include <cmath>
using namespace std;
void towerOfHanoi(int n,char first ,char second,char third){
    //first=source
    //second=helper
    //third=target

    //base case
    if(n==0){
        return;
    }

    //recursive case
    
    towerOfHanoi(n-1,first,third,second);
    cout<<"Move "<<n<<"th disc from T"<<first<<" to T"<<second<<endl;
    towerOfHanoi(n-1,third,second,first);

    
}
int main(){
int n;
cin>>n;
towerOfHanoi(n,'1','2','3');
//showing number of movements rings have to take
cout<<(pow(2,n))-1<<endl;
cout<<endl;
return 0;
}