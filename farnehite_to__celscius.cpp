#include <iostream>
using namespace std;
int main(){
int start,end,gap;
cin>>start;
cin>>end;
cin>>gap;

    int celcius;
  while(start<=end){
 celcius=5*(start-32)/9;
cout<<start<<" "<<celcius<<endl;
start+=gap;
  }
return 0;
}
