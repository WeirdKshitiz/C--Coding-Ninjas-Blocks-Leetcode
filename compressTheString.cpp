#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string getCompressedInput(string &input){
    string s="";
    for(int i=0;i<=input.length()-1;i++){
        int count=1;
        for(int j=i;j<input.length() && input[j]==input[j+1];j++){
            count++;
            i++;
        }
        //inserting value in string s
        s.push_back(input[i]);
        if(count>1){
        s.push_back(count+'0');
        }
    }
    return s;
}
int main(){
string input;
cin>>input;
cout<<getCompressedInput(input)<<"";
cout<<endl;
return 0;
}