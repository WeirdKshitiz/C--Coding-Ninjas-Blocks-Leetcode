
// Q.Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.


// #include <iostream>
// using namespace std;
// int main(){
// int num,count,find,n;

// num=number given
// count=number of times the number is repeated
// find=number to find
// n=last digit of num
// cin>>num;
// cin>>find;
// count=0;
// while(num!=0){
//     n=num%10;
//     if(n==find){
//         count=count+1;
//     }
// num=num/10;
// }

// cout<<count<<endl;
// return 0;
// }






// Take N as input, Calculate it's reverse also Print the reverse.
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int reverse=0;
// while(n>0){
//     int lastDigit=n%10;
// reverse=reverse*10+lastDigit;
// n=n/10;

// }
// cout<<reverse<<endl;
// return 0;
// }




//mirror pattern pattern 5 star pattern
// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int n1=(n+1)/2;
// 	int n2=n/2;
// 	for (int i =1 ; i<=n1; i++)
//     {
//         for (int j = 1;j <=n1-i;j++){
//             cout << "  ";
//         }
//            for (int j = 1; j <=i; j++) {

//                 cout << "* ";
//             }
// 			 for (int j = 1; j <=i-1; j++) {

//                 cout << "* ";
//             }
			

// 			cout<<endl;
// 	}
	
	
//     for(int i=n2;i>=1;i--){
//         for (int j = 1;j <=n1-i;j++){
//             cout << "  ";
//         }
//            for (int j = 1; j <=i; j++) {

//                 cout << "* ";
//             }
// 			 for (int j = 1; j <=i-1; j++) {

//                 cout << "* ";
//             }
			

// 			cout<<endl;
//     }
	
// }




// lcm
// #include <iostream>
// using namespace std;

// int main(){
// 	int n1,n2,i,gcd,lcm;
// 	cin>>n1>>n2;

// 	for(i=1;i<=n1 && i<=n2;i++){
// 		if(n1%i==0 && n2%i==0){
// 			gcd=i;
// 		}
// 	}
// 				lcm=(n1*n2)/gcd;
// cout<<lcm<<endl;
// return 0;

// }


//fibonacci
// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
// int n;
// cin>>n;
// cout<<fib(n);
// cout<<endl;
// return 0;
// }








// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target

// #include <iostream>
// using namespace std;
// void targetSum(int arr[], int n, int target)
// {
//     sort(arr,arr+n);
//     int left = 0;
//     int right = n - 1;
//     while (left <= right)
//     {
//         int sum = arr[left] + arr[right];
//         if (sum > target)
//         {
//             right--;
//         }
//         else if (sum < target)
//         {
//             left++;
//         }
//         else
//         {
//             cout <<arr[left] << " and " << arr[right] << endl;
//             left++;
//             right--;
//         }
//     }
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<=n;i++){
// 		cin>>arr[i];
// 	}
// 	int x;
// 	cin>>x;
// 	targetSum(arr,n,x);
// 	return 0;
// }












// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.

// #include<iostream>
// using namespace std;
// int main() {
// 	int n1,n2,gcd;
// 	cin>>n1>>n2;
// 	for(int i=1;i<=n1 && i<=n2;i++){
// 		if(n1%i==0 && n2%i==0){
// 			gcd=i;
// 		}

// 	}
// 	cout<<gcd;
// 	return 0;
// }






// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=0;
// int original=n;
// while(original>0){
// 	count++;
// 	original=original/10;
// }
// int sum=0;
// int original2=n;
// while(original2>0){
// int lastDigit=original2%10;
// int cube=pow(lastDigit,count);
// sum+=cube;
// original2=original2/10;
// }

// if(sum==n){
//     cout<<"true"<<endl;
// }
// else{
//    cout<< "false"<<endl;
// }
// return 0;
// }







// Take the following as input.
// A number
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

// Write a function that returns its inverse, where inverse is defined as follows

// Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

// Print the value returned.

// //INVERSE OF A NUMBER
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// int counter=1;
// int ans=0;

// while(n!=0){
//     int r=n%10;
//     n/=10;
//     ans+=counter*pow(10,r-1);
//     counter++;

// }
// cout<<ans<<endl;
// return 0;
// }




//SIMPLE INPUT
// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// int sum=0;
// while(true){
// cin>>n;
// sum+=n;
// if(sum<0){
// break;
// }
// else{
//     cout<<n<<endl;
// }
// }
// return 0;
// }




//BINARY to DECIMAL

// #include <iostream>
// using namespace std;
// int binaryToDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
// int n;
// cin>>n;
// cout<<binaryToDecimal(n);
// return 0;
// }




// Take the following as input.

// Minimum Fahrenheit value
// Maximum Fahrenheit value
// Step

// Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37
// #include <iostream>
// using namespace std;
// int main(){
// int start,end,gap;
// cin>>start;
// cin>>end;
// cin>>gap;

//     int celcius;
//   while(start<=end){
//  celcius=5*(start-32)/9;
// cout<<start<<" "<<celcius<<endl;
// start+=gap;
//   }
// return 0;
// }




// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
// #include <iostream>
// using namespace std;
// int main(){
// int num1,num2;
// cin>>num1>>num2;
// int count=0;
// int i=1;
// while(count<num1){
//     int num=(3*i)+2;
//     i++;
//     if((num%num2)==0){
       
//     }
//     else{
//         cout<<num<<endl;
// count++;
//     }
// }
// return 0;
// }


// revise above one again


// Take N (number of rows), print the following pattern (for N = 5)
// 1
// 2 2
// 3 0 3
// 4 0 0 4
// 5 0 0 0 5
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i,j;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//           if(j==1||j==i)
//           {
//               cout<<i<<"\t";
//           }
//           else
//           {
//               cout<<"0"<<"\t";
//           } 
//         }
//         cout<<endl;
//     }
// return 0;
// }




// Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
// #include <iostream>
// using namespace std;
// void decToOctal(int n){
//     int octalNum[100];
// for(int i=0;i<=n-1;i++){
//     while(n!=0){
//         octalNum[i]=n%8;
//         n=n/8;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         cout<<octalNum[j];
//     }
// }

// }
// int main(){
//     int n;
//     cin>>n;
//     decToOctal(n);
// }




// Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

// #include <iostream>
// using namespace std;
// int main(){
// int i,j,k,n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(k=1;k<=n;k++){
//         if(i==1 || i==n || k==1 || k==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<"\n";
// }

// return 0;
// }






// Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned
// #include <iostream>
// using namespace std;


// int conversion(int num,int sb,int db){
//     //any base to decimal

//     int ans=0;
//     int x=1;
//     while(num!=0){
//         int rem=num%10;
//         ans+=rem*x;
//         x*=sb;
//         num=num/10;
        
//     }

//     // refreshing the variables
//     x=1;
//     num=ans;
//     ans=0;

// //decimal to any number
// while(num!=0){
//     int rem=num%db;
//     ans+=rem*x;
//     x*=10;
//     num=num/db;
// }
// return ans;
// }
// int main(){
// int sb,db,sn;
// cin>>sb>>db>>sn;
// cout<<conversion(sn,sb,db);
// return 0;
// }


// // revise above 3 codes again as i have just copied them !













// Take N (number of rows), print the following pattern (for N = 6)
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// #include <iostream>
// using namespace std;
// int fact(int num){
//     int factorial=1;
//     for(int i=1;i<=num;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<=n-1;i++){
//     for(int j=0;j<=i;j++){
// cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }




// PATTERN MOUNTAIN
// Take N (number of rows), print the following pattern (for N = 4).

//                        1           1
//                        1 2       2 1  
//                        1 2 3   3 2 1
//                        1 2 3 4 3 2 1  

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
// cin>>n;
// // int j=0;
// // int temp=n*2-2*j-2;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }

//     int space =n*2-2*i-1; 
//     //cout<<"space = "<<space<<endl;
//     for(int j=1;j<=space;j++){
//         cout<<"  ";
//     }
//     for(int j=i;j>=1;j--){
//         if(j==n)
//         continue;

//         cout<<j<<" ";
//     }
//     cout<<endl;
// }


// cout<<endl;
// return 0;
// }





#include <iostream>
using namespace std;
int main(){
    int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        if(i==1 && j==1)
        continue;
        cout<<"*";
    }
    for(int k=1;k<=2*i-3;k++){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n-1;i>=1;i--){
    for(int j=1;j<=n-i+1;j++){
        if(i==1 && j==1)
        continue;
        cout<<"*";
    }
    for(int k=1;k<=2*i-3;k++){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

}