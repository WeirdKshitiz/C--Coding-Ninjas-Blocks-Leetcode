// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// string S1;
// getline(cin,S1);
// // int n=S1.length(); both length and size act as same functions
// int n=S1.size();
// cout<<S1<<endl;
// cout<<n<<endl;


//cin.ignore()

// string s1,s2;
// cin.ignore();
// getline(cin,s1);
// cin.ignore(2);
// getline(cin,s2);
// cout<<s1<<endl;
// cout<<s2<<endl;





// using ternary operators
// string s1="abc";
// string s2="edf";
// s1>s2?cout<<"s1 " : cout<<"s2"<<endl;
// s1=s1+s2;
// cout<<s1<<endl;




// string s1="abcdefghijklmnopqrstuvwxyz";
//  string s2="ab";
// s1>s2?cout<<"s1 " : cout<<"s2"<<endl;
// s1=s1.substr(4,-5);
// cout<<s1<<endl;
// s1.pop_back();//to remove the last element 
// cout<<s1<<endl;
// s1.push_back('$');//to push the value at the last value of the array
// cout<<s1<<endl;




//Q1 length of character array

// char arr[]={'a','b','c','d','e'};
// int count=0;
// for(int i=0;arr[i]!='\0';i++){
//     count++;
// }
// cout<<"Length Of Character array :"<<count<<endl;



// Q2 FIND THE REVERSE OF CHARACTER ARRAY
#include <iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseString(char input[]){
    int len=length(input);
    int i=0, j=len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
int main(){
char input[100];
cin.getline(input,100);
reverseString(input);
cout<<input<<endl;
return 0;
}


//Rotate the array


// return 0;
// }

// #include <iostream>
// using namespace std;
// void rotateTheArray(string arr,int d,int n){
//     for(int i=n-d;i<n;i++){
//         cout<<arr[i];
//     }
//     for(int i=0;i<n-d;i++){
//         cout<<arr[i];
//     }

// }


// int main(){

// string arr="kshitiz";
// int n=arr.length();
// rotateTheArray(arr,3,n);
// //printTheArray(arr,n);
// //cout<<endl;
// return 0;
// }