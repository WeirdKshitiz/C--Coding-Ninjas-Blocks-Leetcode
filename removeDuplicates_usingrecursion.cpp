// #include <iostream>
// using namespace std;
// void removeDuplicates(char* s){
//     if(s[0]=='\0'){
//         return;
//     }
//     if(s[0]==s[1]){
//         int i=0;
//         while(s[i]!='\0'){
//             s[i]=s[i+1];
//             i++;
//         }
//         removeDuplicates(s);//checking on the updated string
//     }
//     removeDuplicates(s+1);//if adjacent characters are not same then check for s+1 string
// }
// int main(){
// char s1[]="geeksforgeeks";
// removeDuplicates(s1);
// cout<<s1<<endl;
// cout<<endl;
// return 0;
// }




#include <iostream>
using namespace std;
void removeDuplicates(int arr[],int n){
    for(int i=0;i<n;i++){
       if(arr[0]==arr[1]{
            arr[i]=arr[i+1];
        }
    }
    removeDuplicates(arr+1,n-1);

}
int main(){
    int n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
removeDuplicates(arr,n);
for(int i=0;i<n;i++){
   cout<<arr[i];
}
cout<<endl;
return 0;
}