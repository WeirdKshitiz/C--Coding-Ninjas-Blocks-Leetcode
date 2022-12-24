#include <iostream>
using namespace std;
char maxOccuringChar(string str){
    char ans;
int maxfreq=0;
int n=str.length();
int count[256]={0};
for (int i = 0; i < n; i++) {
      count[str[i]]++;
      if (count[str[i]] > maxfreq) {
         maxfreq = count[str[i]];
         ans = str[i];
      }
   }
   return ans;
}

int main(){
string str="takeyouforwaard";
 cout << "Maximum occurring character is " <<maxOccuringChar(str) << endl;
cout<<endl;
return 0;
}