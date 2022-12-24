// * 
// ** 
// *** 
// **** 
// *****
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//     //for every row,run the column
//     for(int col=1;col<=row;col++){
//         cout<<"*";
//     }
//     //when one row is printed ,we need to add a new line
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }

// *****
// *****
// *****
// *****
// *****
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }




// using the input taken from the user about the rows and the columns
// ***
// ***
// ***
// ***
// ***
// #include <iostream>
// using namespace std;
// int main(){
// int rows;
// int cols;
// cin>>rows>>cols;
// for(int i=1;i<=rows;i++){
//     for(int j=1;j<=cols;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }







//hollow rectangle
// ********
// *      *
// *      *
// *      *
// *      *
// ********
// #include <iostream>
// using namespace std;
// int main(){
// int rows,cols;
// cin>>rows>>cols;
// for(int i=1;i<=rows;i++){
//     for(int j=1;j<=cols;j++){
//         if(i==1||i==rows){
//             cout<<"*";
//         }
//         else if(j==1||j==cols){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
       
//     }
//      cout<<endl;
// }
// cout<<endl;
// return 0;
// }




//inverted half pyramid
// ******
// *****
// ****
// ***
// **
// *
// #include <iostream>
// using namespace std;
// int main(){
// int rows;
// cin>>rows;
// for(int i=rows;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }




//half pyramid 180degrees
//     *
//    **
//   ***
//  ****
// *****
// #include <iostream>
// using namespace std;
// int main(){
// int rows;
// cin>>rows;
// for(int i=1;i<=rows;i++){
//     for(int j=1;j<=rows;j++){
//         if(j<=rows-i){
//             cout<<" ";
//         }
//         else{
//      cout<<"*";
//         }
//     }
//        cout<<endl;
// }
// cout<<endl;
// return 0;
// }



// ***** 
// **** 
// *** 
// ** 
// *

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }



// 1 
// 12 
// 123 
// 1234 
// 12345
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }


// * 
// ** 
// *** 
// **** 
// ***** 
// **** 
// *** 
// ** 
// *
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// return 0;
// }





// 123
// 123
// 123
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }




// 321
// 321
// 321
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<n-j+1;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }



// 1  2  3  4  5  
// 6  7  8  9  10  
// 11  12  13  14  15  
// 16  17  18  19  20  
// 21  22  23  24  25
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=1;
// for(int i=1;i<=n;i++){
    
//     for(int j=1;j<=n;j++){
       
//         cout<<count<<" ";
//         count++;
//     }
  
//     cout<<endl;
// }

// return 0;
// }



// * 
// ** 
// *** 
// **** 
// *****
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }




// 1 
// 22 
// 333 
// 4444 
// 55555
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }






// 1 
// 23 
// 456 
// 78910
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }




// 1 
// 23 
// 345 
// 4567 
// 56789
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     int value=i;
//     for(int j=1;j<=i;j++){
//         cout<<value;
//         value++;
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }




// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<(i-j+1)<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }




// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
// for(int j=1;j<=n;j++){
//     char ch='A'+i-1;
//     cout<<ch;
// }
// cout<<endl;
// }
// cout<<endl;
// return 0;
// }





// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         char ch='A'+j-1;
//         cout<<ch;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }





// CBA
// FED
// IHG
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
    
//     for(int j=1;j<=n;j++){
//        char ch='A'+n*i-j;
//         cout<<ch;
       
//     }
//     // ch++;
//     // cout<<ch;
    
    
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }










// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
    
//     for(int j=n;j>=1;j--){
//        char ch='A'+n*i-j;
//         cout<<ch<<" ";
       
//     }
//     // ch++;
//     // cout<<ch;
    
    
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }












// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
    
//     for(int j=1;j<=n;j++){
//        char ch='A'+i+j-2;
//         cout<<ch<<" ";
       
//     }
//     // ch++;
//     // cout<<ch;
    
    
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }



// A
// BB
// CCC
// DDDD
// EEEEE
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         char ch='A'-1+i;
//         cout<<ch;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }








// A
// BC
// DEF
// GHIJ
// KLMNO
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
//    char ch='A';
// for(int i=1;i<=n;i++){
 
//     for(int j=1;j<=i;j++){
           
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }



// A
// BC
// CDE
// DEFG
// EFGHI
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//     char ch=('A'+row+col-2);
//     cout<<ch;
//     col=col+1;
// }
// cout<<endl;
// row=row+1;

// }
// }









//output=
// 54321012345
//  432101234
//   3210123
//    21012
//     101
//      0
//     101
//    21012
//   3210123
//  432101234
// 54321012345
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

//    for (int i = n; i >=0; i--)
//     {
//          for(int j=n;j>i;j--)
//         {
// cout<<"  ";
//         }
//         for (int j = i; j >=0; j--)
//         {
//             cout <<j<<" ";
//         }
       
//         for (int j = 1; j <= i ;j++)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }



//opposite loop
//        for (int i = 1; i <=n; i++)
//     {
//          for(int j=0;j<n-i;j++)
//         {
// cout<<"  ";
//         }
//         for (int j = i; j >=0; j--)
//         {
//             cout <<j<<" ";
//         }
       
        // for (int j = 1; j <= i ;j++)
        // {
        //     cout << j<<" ";
        // }
//         cout << endl;
//     }
// cout<<endl;
// return 0;
// }




//self code
// 54321012345
//  432101234
//   3210123
//    21012
//     101
//      0
//     101
//    21012
//   3210123
//  432101234
// 54321012345






// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// for(int i=n;i>=0;i--){
//     for(int j=0;j<=n;j++){
//         if(j<n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<n-j;
//         }
        
//     }
//      for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }



// for(int i=1;i<=n;i++){
//     for(int j=0;j<=n;j++){
//         if(j<n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<n-j;
//         }
        
//     }
//      for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }


// return 0;
// }











