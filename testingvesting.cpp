#include <iostream>
using namespace std;
char maxOccuring(string str){
    int ans;
    int n=str.length();
    int maxFreq=0;
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[str[i]]++;
        if(count[str[i]]>maxFreq){
            maxFreq=count[str[i]];
            ans=str[i];
        }
    }
    return ans;
}
int main(){
string str;
cin>>str;
cout<<maxOccuring(str)<<endl;
cout<<endl;
return 0;
}