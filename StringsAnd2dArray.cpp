//check if Palindrome

// #include <iostream>
// using namespace std;
// bool isPalindrome(string str){
//     int low,high;
//     low=0;
//     high=str.length()-1;
//     while(low<high){
//     if(str[low]!=str[high]){
//         return false;
//     }
//     low++;
//     high--;
// }
// return true;
// }
// int main(){
// string str;
// cin>>str;
// if(isPalindrome(str)){
//     cout<<"Yes it is a fucking palindrome";
// }
// else{
//     cout<<"not a palindrome";
// }

// return 0;
// }






// // Replace a character c1 with c2 in a string S


// #include <iostream>
// using namespace std;
// string replace(string s1,char c1,char c2){
//     int l=s1.length();
//   for(int i=0;i<l;i++)
// {
//     if(s1[i]==c1){
//         s1[i]=c2;
//     }
//     else{
//         continue;
//     }
// }
// return s1;
// }
// int main(){
// string s1="gzzksforgzzks";
// cout<<"before replacing: "<<s1<<endl;
// char c1='z';
// char c2='e';
// cout<<"after replacing: "<<replace(s1,c1,c2);
// return 0;
// }


#include <iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter the value nin the string"<<endl;
    cin>>s1;
    string s2;
    s2 = s1[0];
    int count = 0;
    int n = s1.length();
    for(int i = 0; i < n; i++)
    {
        if(s2[0] == s1[i])
        {
            count++;
        }
        else
        {
            cout<<s2<<count;
            count = 0;
            s2 = s1[i];
            count++;
        }
    }
    cout<<s2<<count;
return 0;
}