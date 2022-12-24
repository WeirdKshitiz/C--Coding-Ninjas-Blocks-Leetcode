#include <iostream>
using namespace std;
int main(){
// int farnehite;
// cin>>farnehite;

// while(farnehite>=0 && farnehite<=300){
//     int celcius=(5.0/9)*(farnehite-32);
//     cout<<farnehite<<" "<<celcius<<endl;
//     farnehite+=20;
   
// }
int start,end,step;
cin>>start>>end>>step;
while(start<=end){
    int celcius=(start-32)*5/9;
    cout<<start<<" "<<celcius<<endl;
    start=start+step;

}


}