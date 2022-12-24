
//REVERSE A STRING

// #include <iostream>
// using namespace std;
// int length(char input[]){
//     int count=0;
//     for(int i=0;input[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// void reverseString(char input[]){
//     int len=length(input);
//     int i=0,j=len-1;
//     while(i<j){
//         char temp=input[i];
//         input[i]=input[j];
//         input[j]=temp;
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     reverseString(input);
//     cout<<input<<endl;

//     return 0;
// }






#include <iostream>
using namespace std;
int main(){
int num,n;
cin>>num;
int find;
cin>>find;
int count=0;
while(num!=0){
    n=num%10;
    if(n==find){
        count++; 
    }
     n=n/10;
}
cout<<count;
return 0;
}