#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v[1]=100;

// v[3]=1002;
// v[4]=1234;

v.push_back(23);
v.push_back(234);
v.pop_back();


cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;
cout<<v[4]<<endl;


// cout<<"Size :"<<v.size()<<endl;

// cout<<v.at(2)<<endl;
// cout<<v.at(3)<<endl;

return 0;
}  