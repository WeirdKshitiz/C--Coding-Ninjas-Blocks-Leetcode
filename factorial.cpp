#include <iostream>
#include <vector>
using namespace std;
void dictionaryOrder(string s,int freq,vector<string>&ans,string ds){
    if(ds.length()==s.length()){
        ans.push_back(ds);
        return;
    }
}
int main(){
string s;
cin>>s;
vector<string>ans;
int freq[s.length()]={0};
dictionaryOrder(s,freq,ans,"");
cout<<endl;
return 0;
}