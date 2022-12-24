#include <iostream>
using namespace std;
void getReverse(string &str,int i){
    if(i>(str.length()-1-i)){
        return;
    }
    swap(str[i],str[str.length()-i-1]);
    i++;
    getReverse(str,i);
}
int main(){
string name="geeksforgeeks";
getReverse(name,0);
cout<<name<<endl;
return 0;
}