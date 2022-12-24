#include <iostream>
#include <cstring>
using namespace std;
// int main(){
// char input[100];
// cin>>input;

// int len=strlen(input);
// cout<<len<<endl;
// return 0;
// }

// int main(){
//     char input1[100],input2[100];
//     cin>>input1;
//     cin>>input2;

//     if(strcmp(input1,input2)==0){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
// }

int main(){
    char input1[100]="abcd";
    char input2[100]="def";

    cout<<"Before copying : ";
    cout<<"Input 1: "<<input1<<endl;
     cout<<"Input 2: "<<input2<<endl;

strncpy(input1,input2,3);

      cout<<"After copying : ";
    cout<<"Input 1: "<<input1<<endl;
     cout<<"Input 2: "<<input2<<endl;
}

// void printAllPrefixes(char input[]){
//     //i represents end index of my prefix
//     for(int i=0;input[i]!='\0';i++){
//         //j represents start index of my prefix
//         // j<=i is liye use krenge kyunki humein 0 to 0 print krwana hoga
//         for(int j=0;j<=i;j++){
// cout<<input[j];
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     char input1[100]="abcd";
//     printAllPrefixes(input1);
// }