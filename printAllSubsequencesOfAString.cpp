#include <iostream>
using namespace std;
void printSubsequences(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    
    printSubsequences(input.substr(1),input[0]+output);

    printSubsequences(input.substr(1),output);
}
int main(){
string input="abcd";
string output="";
printSubsequences(input,output);
cout<<endl;
return 0;
}






// // OR



// #include <iostream>
// using namespace std;


// void printsubseq(char in[],int i,char out[],int j){
//     if(in[i]=='\0'){
//         out[j]='\0';
//         cout<<out<<endl;
//         return;
//     }

//     printsubseq(in,i+1,out,j);
//         printsubseq(in,i+1,out,j+1);
// }
// int main(){
// char arr[]="abcd";
// char out[100];
// printsubseq(arr,0,out,0);
//                      //  ^
//                      //  |
//                      //  output array ka starting index
// cout<<endl;
// return 0;
// }