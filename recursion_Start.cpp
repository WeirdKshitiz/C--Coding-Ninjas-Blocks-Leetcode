//print name n times





// #include <iostream>
// using namespace std;
// void increaseCount(int count,string name,int n){
//     if(count>n){
//         return;
//     }
//     cout<<name<<endl;
//     count++;
//     increaseCount(count,name,n);
    
// }
// int main(){
// int count=1;
//  string name="Kshitiz";
//  int n=5;
// increaseCount(count,name,n);
// return 0;
// }










//print linearly from 1 to n

// #include <iostream>
// using namespace std;
// void linearCount(int count,int n){
//     if(count>n){
//         return;
//     }
//     cout<<count<<endl;
//     count++;
// linearCount(count,n);
// }
// int main(){
//     int count=1;
// int n=5;
// linearCount(count,n);
// cout<<endl;
// return 0;
// }














//print from n to 1
// #include <iostream>
// using namespace std;
// void oppositeCount(int count,int n){
//     if(n<count){
//         return;
//     }

//     cout<<n<<endl;
//     n--;
//     oppositeCount(count,n);
// }
// int main(){
// int n=5;
// int count =1;
// oppositeCount(count,n);
// cout<<endl;
// return 0;
// }

















//print 1 to n using backtracking

// #include <iostream>
// using namespace std;
// void linearCount(int count,int n){
//     if(count<1){
//         return;
//     }
  
   
// linearCount(count-1,n);
//   cout<<count<<endl;
// }
// int main(){
//     int count=5;
// int n=5;
// linearCount(count,n);
// cout<<endl;
// return 0;
// }













//print n to 1 using backtracking

// #include <iostream>
// using namespace std;
// void oppositeCount(int count,int n){
//     if(n<count){
//         return;
//     }
//     oppositeCount(count+1,n);
//     cout<<count<<endl;
// }
// int main(){
// int n=5;
// int count =1;
// oppositeCount(count,n);
// cout<<endl;
// return 0;
// }





//sum of n using recursion


// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
// int n=3;
// cout<<"Sum of N number is \n";
// cout<<sum(n);
// cout<<endl;
// return 0;
// }







//factorial of n using recursion
// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*sum(n-1);
// }
// int main(){
// int n=5;
// cout<<"Sum of N number is \n";
// cout<<sum(n);
// cout<<endl;
// return 0;
// }




























//swap the array

// #include <iostream>

// using namespace std;
// void swapFunc(int i,int arr,int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
// swapFunc(i+1,arr,n-1);

// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// swapFunc(0,arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i];
// }
// cout<<endl;
// return 0;
// }














//check if a string is a palindrome

// #include <iostream>
// using namespace std;
// bool checkPalindrome(int i ,string &s){
//     if(i>s.size()/2){
//         return true;
//     }
//     if(s[i]!=s[s.size()-i-1]){
//         return false;
//     }
//     return checkPalindrome(i+1,s);
// }
// int main(){
// string s="madam";
// if(checkPalindrome(0,s)){
//     cout<<"String is palindrome";
// }
// else{
//     cout<<"Kon bol rha tha ki palindrome hai?";
// }
// cout<<endl;
// return 0;
// }









//fibonacci numbers

// #include <iostream>
// using namespace std;
// int f(int n){
//     if(n<=1){
//         return n;
//     }
//     int last=f(n-1);
//     int secondLast=f(n-2);
//     return last+secondLast;
// }
// int main(){
// cout<<f(4);
// cout<<endl;
// return 0;
// }









